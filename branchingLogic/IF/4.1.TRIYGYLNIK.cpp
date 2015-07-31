// 4.1.TRIYGYLNIK.cpp
#include <iostream>
using namespace std;

main()
{
	short a, b, c,	// input variables as original and a set of
					// temporary variables during algo tilth. 
		 max, min, mid ;
	cin >>a >>b >>c ;
	min = (a < b) ? a : b ;
	min = (min < c) ? min : c ;
	max = (a > b) ? a : b ;
	max = (max > c) ? max : c ;
	mid = a + b + c - (max + min) ;
	cout  <<"  " <<max <<endl
		  <<" " <<mid <<mid <<mid <<endl
		  <<min <<min <<min <<min <<min ; 
}
