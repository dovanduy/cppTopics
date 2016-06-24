#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
     string intAsString = "42";
     int asInt = 0;

     stringstream ss;
     ss<<intAsString;
     ss>>asInt; //convert string into int and store it in "asInt"
     ss.str(""); //clear the stringstream
     ss.clear(); //clear error flags because "42" is not a valid stream (?)

     //here asInt == 42
	cout <<asInt ;
     return 0;
}
