// processor
#include <iostream>
#include <string>
using namespace std;

string ext5 = "a";
string ext4 = "l";
string ext3 = "o";
string ext2 = "c";
string ext1 = ".";

class Processor
{
    public:

    void process ( int argc, char** argv ) {
      cout << "checking for valid file..." << endl;
      // check last 5 characters of the 2nd char** entered
      // checking: . c o l a
    }
};
