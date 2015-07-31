// SFETOFAR_V1.cpp
#include <iostream>
using namespace std;
main ()
{
	short n, red, yellow, green ;
	cin >>n ;
	red = n/4 + 1 ;
	
	if (n%4 == 0)
		yellow = n/2  ;
	else if (n%4 == 1)
		yellow = n/2  + 1 ;
	else if (n%4 == 2)
		yellow = n/2 ;
	else if (n%4 == 3)
		yellow = n/2 + 1 ;
		
	if (n%4 == 3)
		green = n/4 + 1 ;
	else if (n%4 == 2 || n%4 == 0)
		green = n/3 ;
	else // n%4 == 1
		green = n/4 ;
	cout <<yellow <<' ' <<red <<' ' <<green ;
}
