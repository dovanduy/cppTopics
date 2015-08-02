// 5.2.DELITELI-EVKLID-SetOfFunc.cpp
#include <iostream>
using namespace std;

int nod (int a, int b) //  EUCLID Algorithm
{// https://en.wikipedia.org/wiki/Euclidean_algorithm
	while (a != b)
	if (a>b)
		a = a - b;
	else
		b = b - a;
	return a ;
}

int sumNumDig (int num)
{
	int sum ;
	sum = 0;
	for ( ; 0 != num; num=num/10)
		sum += num%10 ;
	return sum ;
}

bool isBadSquare (int k, int m)
{
	return	! (nod(k, m) > 1 && // ima netrivialni obshti deliteli
		 		sumNumDig(m) > sumNumDig(k)) ;
}

main()
{
	int n, m,
		k,
		counter ;
	cin >>n >>k ;
	counter = 0 ;

	if (n>1)
	do {
		cin >>m ;
		if (isBadSquare(k, m)) // now m is a new bad square to be counted
			counter++ ;
		else // m becomes a new sequence member
			k = m ;
		n = n - 1;
	} while ( n > 1 ) ;

	cout 	<<counter ;
}
