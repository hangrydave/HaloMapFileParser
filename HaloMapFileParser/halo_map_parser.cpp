#include <iostream>
#include <fstream>
#include "halo_1_ce_parser.h"
#include "halo_2_vista_parser.h"

using namespace std;

int main()
{
    string halo1ce_path = "D:/Program Files (x86)/Microsoft Games/Halo Custom Edition/maps/";
    string halo2v_path = "D:/Games/Halo 2 Project Cartographer/maps/";

    string path = halo2v_path;
    string map_name = "coagulation.map";

    fstream map_file(path + map_name, ios::in | ios::binary);

    // https://stackoverflow.com/a/22986486/5132781
    map_file.ignore(numeric_limits<streamsize>::max());
    streamsize length = map_file.gcount();
    map_file.clear();
    map_file.seekg(0, ios_base::beg);
    
    char* buffer = new char[length];
    map_file.read(buffer, length);

    halo_1_ce_parser h1_parser(buffer);
    h1_parser.print();

    cout << "\n\n\n";

    halo_2_vista_parser h2_parser(buffer);
    h2_parser.print();

    return 0;
}
