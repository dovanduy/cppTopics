//sfetofar.cpp
#include <iostream>
using namespace std;
main ()
{
	int n, red, yellow ;
	cin >>n ;
	red = n/4 + 1 ;
	if (n%4 == 0)
		yellow = n/2  ;
	else if (n%4 == 1)
		yellow = n/2 + 1 ;
	else if (n%4 == 2)
		yellow = n/2 ;
	else if (n%4 == 3)
		yellow = n/2 + 1 ;
	cout <<yellow <<' ' <<red ;
}
