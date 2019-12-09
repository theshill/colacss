// version flag
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Config conf;

class Version
{
    public:

    string shortname () { return "-v"; };
    string longname () { return "--version"; };

    void printversion () {
      cout << "Language: " << conf.getlangversion() << endl;
      cout << "CLI: " << conf.getcliversion() << endl;
    };
};
