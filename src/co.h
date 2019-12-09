// version flag
#include <iostream>
#include <fstream>
#include <string>
#include <array>

#define MAXCONF 100

using namespace std;

string _file_ = ".colacss", _line_;

class Config
{
    public:

    array< string, MAXCONF > getarray ()
    {
      array< string, MAXCONF > configarray;
      ifstream srcfile ( _file_ );
      unsigned int configarraylen = 0;
      if ( ! srcfile.is_open() ) { cout << "cola: error: could not find .colacss file" << endl; }
      else { while (getline(srcfile, _line_)) { if (configarraylen < MAXCONF) { configarray[configarraylen++] = _line_; } } };
      return configarray;
    }

    string getnamespace ()
    {
      array< string, MAXCONF > Something1 = getarray();
      return Something1[0];
    }

    string getname ()
    {
      array< string, MAXCONF > Something1 = getarray();
      return Something1[1];
    }

    string getdescription ()
    {
      array< string, MAXCONF > Something2 = getarray();
      return Something2[2];
    }

    string getlangversion ()
    {
      array< string, MAXCONF > Something3 = getarray();
      return Something3[3];
    }

    string getcliversion ()
    {
      array< string, MAXCONF > Something4 = getarray();
      return Something4[4];
    }
};
