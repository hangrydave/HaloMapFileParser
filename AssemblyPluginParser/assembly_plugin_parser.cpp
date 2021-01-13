#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

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
    string dir_path = fs::current_path().string() + "\\tagdefs\\Halo1\\";

    for (auto& file : fs::directory_iterator(dir_path))
    {
        fs::path file_path = file.path();
        string tag_name = get_tag_name(file_path);

        std::ifstream input(file_path);

        string line;
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

            if (c == ' ')
                current_word.clear();
            else
                current_word += c;
        }

        unsigned int x = std::stoul(current_word, nullptr, 16);
        std::cout << "{ \"" << tag_name << "\", " << x << " }," << std::endl;
    }
}
