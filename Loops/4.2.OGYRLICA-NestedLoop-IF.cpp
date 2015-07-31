// OGYRLICA.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, m1, m2,	// input variables as original and a set of
					// temporary variables during algo tilth. 
		 m1Last, m2First ;
	cin >>n >>m1 >>m2 ;
	do {
		m1Last = m1 % 10 ;
		m2First = m2 ;
		while (m2First > 9)
			m2First = m2First / 10 ;
		if (m1Last != m2First)
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
