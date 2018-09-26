#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

string flags, temp, filename;
int main(int argc, char *argv[]) {
    for(int i = 1; i<argc; i++) {
        if(string(argv[i])[0] == '-') {
            temp = argv[i];
            flags += "#include <" + temp.substr(1, temp.size()-1) + ">\n";
        }
        else {filename = argv[i];}
    }
    if(filename.size() == 0) {return 0;}
    if(flags.size() == 0) {flags = "#include <iostream>\n";}
    
    ofstream file( (filename.substr(filename.size()-4, filename.size()-1) == ".cpp") ? filename : filename + ".cpp");
    file << ""
    "" + flags + ""
    "\n"
    "using namespace std;\n\n"
    "int main() {\n"
    "    return 0;\n"
    "}\n"
    "" << endl;
    file.close();
    return 0;
}