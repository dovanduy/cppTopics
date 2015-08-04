// 4.2.OGYRLICA-1-Func-OneLoop.cpp
#include <iostream>
using namespace std;

bool isStuck (int num1, int num2)
{
	int num1Last, num2First ; // last, first digit
	num1Last = num1%10 ;
	num2First = num2;
	while (num2First > 9)
		num2First = num2First / 10 ;
	return (num1Last == num2First) ;
}

int main()
{
	int n, m1, m2,	// input variables as original and a set of
					// temporary variables during algo tilth. 
		 m1Last, m2First ;
	cin >>n >>m1 >>m2 ;
	do {
		if ( ! isStuck (m1, m2))
		{
			cout <<m1 <<' ' <<m2;
			return 0 ;
		}
		m1 = m2 ;
		cin >>m2 ;		
		n = n - 1;
	} while (n > 2) ;
	cout <<"YES" ;
}
