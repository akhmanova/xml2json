#include <iostream>
#include <sstream>
#include <fstream>

#include "/home/elina/Documents/xml/xml2json.hpp"

using namespace std;

void convert( const istream &input )
{
    ostringstream oss;
    oss << input.rdbuf();

    const auto json_str = xml2json( oss.str().data() );
    cout << json_str << endl;
}

int main( const int argc, const char *const argv[] ) 
{
    
    switch ( argc ) {
        case 1: convert(cin);
                break;
        case 2: convert( ifstream( argv[1] ));
                break;
        default: cout << "HELLO";
    }
}
