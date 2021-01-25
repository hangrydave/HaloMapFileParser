#include <iostream>
#include <fstream>
#include "halo1ce/halo_1_ce_parser.h"
#include "halo2vista/halo_2_vista_parser.h"
#include "utilities.h"
#include "halo2vista/tags/tag_registry.h"

using namespace std;

int main()
{
    tag_registry registry;
    registry.register_tag_definitions();
    tag_collection* group = registry["ayyohhhhh"];
    auto field = group->operator[]("eeeewa");
    auto tag = field->operator[]("WHAT THE FUCK");

    string halo1ce_path = "D:/Program Files (x86)/Microsoft Games/Halo Custom Edition/maps/";
    string halo2v_path = "D:/Games/Halo 2 Project Cartographer/maps/";

    string path = halo2v_path + "coagulation.map";

    fstream map_file(path, ios::in | ios::binary);

    // https://stackoverflow.com/a/22986486/5132781
    map_file.ignore(numeric_limits<streamsize>::max());
    streamsize length = map_file.gcount();
    map_file.clear();
    map_file.seekg(0, ios_base::beg);
    
    char* buffer = new char[length];
    map_file.read(buffer, length);

    //halo_1_ce_parser h1_parser(map_file, buffer);
    //h1_parser.print();

    //cout << "\n\n\n";

    halo_2_vista_parser h2_parser(buffer);
    h2_parser.print();

    return 0;
}
