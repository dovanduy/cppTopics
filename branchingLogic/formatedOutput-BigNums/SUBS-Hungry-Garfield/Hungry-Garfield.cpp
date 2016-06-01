#include <iostream>
//#include <cmath>
#include <cstdio>
using namespace std;
int main ()
{
	long double money, rate, res=0;
//	long cents, dlr, cnts;
	long double pizzaPrice, lasagnaPrice, sandvichPrice,
	s1, s2, s3;
	long double	pizzaQty, lasagnaQty, sandvichQty ; // int => -2 tests && (long double -1 test + BEST-Time 0.000)
	cin >>money >>rate >>pizzaPrice >>lasagnaPrice >>sandvichPrice
	>>pizzaQty >>lasagnaQty >>sandvichQty;
//	res = money -(pizzaPrice/rate*pizzaQty + lasagnaPrice/rate*lasagnaQty + sandvichPrice/rate*sandvichQty) ;
//	res = money - (((pizzaPrice*pizzaQty) + (lasagnaPrice*lasagnaQty) + (sandvichPrice*sandvichQty))/rate) ;
	s1 = pizzaPrice*pizzaQty;
	s2 = lasagnaPrice*lasagnaQty ;
	s3 = sandvichPrice*sandvichQty ;
	res+=s1;
	res+=s2;
	res+=s3;
	res/=rate;
	res=money-res;
//	res=3.1415 ;
//	printf ("%0.2f\n", res) ;
// NO tests: 05 & 06
	if (res>=0) // formated and rounded output example by cstdio
	// long double => %0.2Lf, double simply => %0.2lf
		printf ("Garfield is well fed, John is awesome. Money left: $%0.2Lf.", res) ;
	else // float => money by %0.2f
		printf ("Garfield is hungry. John is a badass. Money needed: $%0.2Lf.", (-res)) ;
}
