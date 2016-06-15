#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

bool isFileExist(const char* fileName)
{
	bool res;
    std::ifstream infile(fileName);
    res = infile.good() ;
    infile.close() ;
    return res;
}

#include "Person.h"
int main ()
{
	cout <<isFileExist("my.txt") ;
	return 0;
}
