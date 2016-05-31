// https://softuni.bg/downloads/svn/csharp-basics/Exams/2016-02-21/Problem01-Hungry-Garfield.zip
#include <iostream>
//#include <cmath>
#include <cstdio>
using namespace std;
int main ()
{
	long double money, rate, res;
//	long cents, dlr, cnts;
	long double pizzaPrice, lasagnaPrice, sandvichPrice;
	int	pizzaQty, lasagnaQty, sandvichQty ;
	cin >>money >>rate >>pizzaPrice >>lasagnaPrice >>sandvichPrice
	>>pizzaQty >>lasagnaQty >>sandvichQty;
	res = money -(pizzaPrice/rate*pizzaQty + lasagnaPrice/rate*lasagnaQty + sandvichPrice/rate*sandvichQty) ;
//	res=3.1415 ;
//	printf ("%0.2f\n", res) ;
// NO tests: 05 & 06
	if (res>=0) // formated and rounded output example by cstdio
	// long double => $%0.2Lf
		printf ("Garfield is well fed, John is awesome. Money left: $%0.2Lf.", res) ;
	else // double => money by $%0.2f
		printf ("Garfield is hungry. John is a badass. Money needed: $%0.2Lf.", (-res)) ;
}
