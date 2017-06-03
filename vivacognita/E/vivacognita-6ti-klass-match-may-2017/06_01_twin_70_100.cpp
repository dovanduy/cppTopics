#include <iostream>
#include <cmath>
using namespace std ;
typedef unsigned long long lng ;

bool isPrime (lng num)
{
	double koren ;
	koren=sqrt(num) ;
	if (num==2)
		return true ;
	else
	  for (lng i=3; i<=koren; i+=2)
	  if (0==num%i)
	     return false ;
	return true ;
}

int main ()
{
	lng a, b, cnt=0 ;
	cin >>a >>b;

	if (0==a%2)
	  ++a ;

	for (lng i=a; i<=b-2; i+=2)
	  if (isPrime(i) && isPrime(i+2))
	  	++cnt ;
	  
	cout <<cnt ;
	return 0 ;
}
