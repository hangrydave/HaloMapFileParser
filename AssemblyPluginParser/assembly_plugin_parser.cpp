#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <vector>
#include "version1.h"

namespace fs = std::filesystem;

using std::string;

string get_tag_name(const fs::path& path)
{
    string filename = path.filename().string();
    string tag_name;
    for (int i = 0; i < filename.size(); i++)
    {
        char c = filename[i];
        if (c == '.')
            break;
        tag_name += c;
    }
    return tag_name;
}

int main()
{
    string dir_path = fs::current_path().string() + "\\tagdefs\\Halo2\\";
    string output_dir_path = fs::current_path().string() + "\\tagdefs\\Halo2Output\\";

    for (auto& file : fs::directory_iterator(dir_path))
    {
        fs::path file_path = file.path();
        string tag_name = get_tag_name(file_path);
        std::ifstream input(dir_path + tag_name + ".xml");
        std::ofstream h_output(output_dir_path + tag_name + ".h");
        std::ofstream cpp_output(output_dir_path + tag_name + ".cpp");
        
        version1 shitter_v1(tag_name, input, h_output, cpp_output);
        shitter_v1.go_ham();

	    h_output.flush();
        h_output.close();
        cpp_output.flush();
        cpp_output.close();

        /*string line;
        std::getline(input, line);
        std::getline(input, line); // get second line

        bool reading_size = false;
        string current_word;
        for (int i = 0; i < line.size(); i++)
        {
            char c = line[i];

            if (reading_size && c == '"')
                break;

            if (current_word.compare("baseSize=\"") == 0)
            {
                reading_size = true;
                current_word.clear();
            }

            if (c == '_')
                c = '*';

            if (c == ' ')
                current_word.clear();
            else
                current_word += c;
        }

        unsigned int x = std::stoul(current_word, nullptr, 16);
        std::cout << "{ \"" << tag_name << "\", " << x << " }," << std::endl;*/
    }
}
