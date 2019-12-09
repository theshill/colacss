// version flag
#include <iostream>
#include <string>

using namespace std;

class Version
{
    public:

    string shortname () { return "-v"; };
    string longname () { return "--version"; };
    
    void printversion () {
      cout << "version 0.0.1" << endl;
    };
};
