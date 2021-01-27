#include <iostream>
#include <string>
#include <filesystem>
#include "version1.h"
#include "version2.h"

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
    std::ofstream include_output(output_dir_path + "tag_definitions.h");

    include_output << "#pragma once"
        << "\n\n";

    for (auto& file : fs::directory_iterator(dir_path))
    {
        fs::path file_path = file.path();
        string tag_name = get_tag_name(file_path);

        std::ifstream input(dir_path + tag_name + ".xml");

        tag_name += "_tag";

        include_output << "#include \"" << tag_name << ".h\"" << "\n";
        std::ofstream h_output(output_dir_path + tag_name + ".h");
        //std::ofstream cpp_output(output_dir_path + tag_name + ".cpp");
        
        // overengineered garbo shitter
        //version1 shitter_v1(tag_name, input, h_output, cpp_output);
        //shitter_v1.go_ham();

        // chad struct shitter
        version2 shitter_v2(tag_name, input, h_output);
        shitter_v2.go_ham();

	    h_output.flush();
        h_output.close();
        //cpp_output.flush();
        //cpp_output.close();
    }
    include_output.flush();
    include_output.close();
}
