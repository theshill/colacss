#include <iostream>
#include <fstream>
#include <string>
#include <array>

#include "er.h"
#include "h.h"
#include "v.h"

#define APISPEC 4

using namespace std;

int main ( int argc, char** argv ) {

  Error error;
  Help help;
  Version version;

  string inputpath;
  bool argumentmatch = false;
  array< string, 10 > APIspec = {
    help.shortname(),
    help.longname(),
    version.shortname(),
    version.longname()
  };

  if ( ! argv[1] ) { error.noinputfile(); }
  else {
    inputpath = argv[1];
    ifstream srcfile ( inputpath );

    // no file found
    if ( ! srcfile.is_open() ) {
      for (int i = 0; i < APISPEC; i++) { if (inputpath == APIspec[i]) { argumentmatch = true; } }
      // no argument match
      if ( ! argumentmatch ) {
        if ( inputpath.at(0) == '-' ) { error.unknownargument(inputpath); }
        else { error.badinputfile(inputpath); }
      }
      // argument match
      else {
        cout << "no file: but there were argument(s) found" << endl;
        cout << "argument(s) found: handle here" << endl;
      }
    }

    // file found
    else {
      cout << "file found: handle here" << endl;
      for (int i = 0; i < APISPEC; i++) {
        cout << APIspec[i] << endl;
      }
    };
    
  };

  return 0;
}
