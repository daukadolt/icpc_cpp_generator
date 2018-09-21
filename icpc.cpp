#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    for(int i = 1; i<argc; i++) {
        ofstream file(string(argv[i])+".cpp");
        file << ""
        "#include<stdio.h>\n"
        "\n"
        "int main() {\n"
        "   return 0;\n"
        "}\n"
        "" << endl;
        file.close();
    }
    return 0;
}