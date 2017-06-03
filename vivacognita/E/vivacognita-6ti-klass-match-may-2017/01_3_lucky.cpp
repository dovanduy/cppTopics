#include <iostream>
#include <string>
#define yes "Yes"
#define no "No"

const char razdelitel = ' ' ;
const char zero = '0' ;

int charToInt (char c)
{
	return ((int)c) ;
}

int digToInt (char c)
{
	return (int)(c-zero) ;
}

using namespace std;
string inp;

int main ()
{
	int r1, r2 ;
	cin >>inp ;
	r1 = digToInt(inp[2]) * digToInt(inp[3]) *
		 digToInt(inp[4]) * digToInt(inp[5]) ;
	r2 = (charToInt(inp[0]) + charToInt(inp[1]) + 
		  charToInt(inp[6]) + charToInt(inp[7])) / 10 ;
	if (r1 == r2) 
		cout <<yes <<razdelitel <<r1;
	else
		cout <<no ;
}
