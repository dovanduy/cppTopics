// 4.2.DELITELI-EVKLID-Func.cpp
#include <iostream>
using namespace std;

int nod (int a, int b)
{ // EUCLID Algorithm https://en.wikipedia.org/wiki/Euclidean_algorithm
	while (a != b)
	if (a>b)
		a = a - b;
	else
		b = b - a;
	return a ;
}

main()
{
	int n, m1,
		m2,
		counter = 0 ;
	cin >>n ;
	cin >>m1 ;

	if (n>1)
	do {
		cin >>m2 ;
		if (nod(m1, m2) == 1)
			counter++ ;
		else // add m2 to a sequence as a new last element
			m1 = m2 ;
		n = n - 1;
	} while ( n > 1 ) ;

	cout 	<<counter ;
}
