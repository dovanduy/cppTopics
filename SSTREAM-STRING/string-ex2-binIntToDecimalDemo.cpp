// binToDecimalDemo.cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
main ()
{ 
	int temp = 16 ;
	stringstream myStream ;
	myStream <<dec <<temp ; // dec is a std::dec manipulator
	string myResultAsString = myStream.str() ;
	cout <<myResultAsString;
}
