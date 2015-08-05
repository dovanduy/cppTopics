// SUBS-02.OddOrEvenCounter.cpp
// https://judge.softuni.bg/Contests/37/CSharp-Basics-Exam-7-November-2014
#include <iostream>
#include <string>
using namespace std;

#define even "even"

long	counters [10] ;

int indOfMax ()
{
	int k, res ;
	for (res=0, k=1; k<10; k++)
	  if (counters[res]<counters[k])
	  	res = k ;
	return res ;
}

bool isEven (long long a)
{
	return ( 0 == a%2 ) ;
}

bool isOdd (long long a)
{
	return ( ! isEven(a) ) ;
}

string numText (int p)
{
	switch (p)
	{
		case 0: return "Tenth" ;
		case 1: return "First" ;
		case 2: return "Second" ;
		case 3: return "Third" ;
		case 4: return "Fourth" ;
		case 5: return "Fifth" ;
		case 6: return "Sixth" ;
		case 7: return "Seventh" ;
		case 8: return "Eighth" ;
		case 9: return "Ninth" ;
		default: return "?" ;
	}
}

int main ()
{
	short	n, c ;	// input
	string	s ;		// input
	long long	nums ;	// input
	short	k1, k2, indCounters ;
	int		indMax ;
	bool toCountEven ;
	cin >>n >>c >>s;
	for (k1=0 ; k1<n; k1++)
		counters[k1] = 0 ;
	toCountEven = s==even ;

	if (toCountEven)
		for (k1=indCounters=1; k1<=n; k1++, indCounters=k1%10)
		  for (k2=0; k2<c; k2++, indCounters++)
		  {
		  	cin >>nums;
		  	if (isEven(nums))
		  	  counters[indCounters]++ ;
		  }
	else
	for ( k1=indCounters=1 ; k1<=n; k1++, indCounters=k1%10)
		  for (k2=0; k2<c; k2++)
		  {
		  	cin >>nums;
		  	if (isOdd(nums))
		  	  counters[indCounters]++ ;
		  } ;

	indMax = indOfMax () ;
	if (0 == counters[indMax])
		cout <<"No" ;
	else
		cout <<numText(indMax) <<" set has the most " <<s <<" numbers: " <<counters[indMax] ;

	return 0 ;
}
