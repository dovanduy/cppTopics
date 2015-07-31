// Ferma.cpp
#include <iostream>
using namespace std;
main ()
{
	int n, zaici, pileta, result ;
	cin >>n ;
	zaici = n/100 ;
	pileta = n%100 ;
	result= zaici*4 + pileta*2 ;
	cout <<result ;
}
