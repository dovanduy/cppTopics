// binToOctalDemo.cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
main ()
{ // The set of 3 bits equals to an Octal digit. 
	int temp = 16 ;
	stringstream myStream ;
	myStream <<oct <<temp ; // oct is a std::oct manipulator
	string myResultAsString = myStream.str() ;
	cout <<myResultAsString;
}
