// Error Class
#include <iostream>
#include <string>

using namespace std;

string _sq_ = "'";

class Error
{
    public:

    void noinputfile () {
      cout << "cola: error: no input files" << endl;
    }
    void badinputfile ( string inputpath ) {
      cout << "cola: error: no such file or directory: " + _sq_ + inputpath + _sq_ << endl;
    }
    void unknownargument ( string inputargument ) {
      cout << "cola: error: unknown argument: " + _sq_ + inputargument + _sq_ << endl;
    }
};
