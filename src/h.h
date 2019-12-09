// help flag
#include <iostream>
#include <string>

using namespace std;

class Help
{
    public:

    string shortname () { return "-h"; }
    string longname () { return "--help"; }
    void printhelp () {
      cout << "Usage: cola styles.cola <options>" << endl;
      cout << "coming soon..." << endl;
    }
};
