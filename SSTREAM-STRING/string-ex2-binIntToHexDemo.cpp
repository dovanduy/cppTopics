// binToHexDemo.cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
main ()
{ // The Half Byte (4 bits) equals to an HexaDecimal digit. 
	int temp = 16 ;
	stringstream myStream ;
	myStream <<hex <<temp ; // hex is a std::hex manipulator
	string myResultAsString = myStream.str() ;
	cout <<myResultAsString;
}
