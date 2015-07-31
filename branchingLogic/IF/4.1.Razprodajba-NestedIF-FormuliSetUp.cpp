#include <iostream>
using namespace std;
main ()
{
	int n, k, a, b, brBezPromocia, total, minBrPromocia ;
	cin >>n >>k >>a >>b ;
	brBezPromocia = a/b ;
	minBrPromocia = (n < k-1) ? n : k-1 ;
	if (brBezPromocia < minBrPromocia)
		total = brBezPromocia ;
	else if (brBezPromocia == minBrPromocia)
		total = brBezPromocia + 1 ;
	else if (brBezPromocia > minBrPromocia && n == k-1)
	{
		total = brBezPromocia + brBezPromocia/n ;
	}
	else if (brBezPromocia > minBrPromocia && minBrPromocia < k-1)
	{ // kupuvame samo po promociaN
		total = brBezPromocia + brBezPromocia/n ;
	}
	else if  (brBezPromocia > minBrPromocia && minBrPromocia < n)
	{ // kupuvame samo po promociaK-1
		total = brBezPromocia + brBezPromocia/(k-1) ;
	}
	else if (n < k-1)
	{ // kupuvame po-evtino po promociaN
		total = (a/(n*b))*n + a/(n*b) ; // brProm*otNpaketa + promocionalni Broiki
		// ostavat (a%(b*n)) pari eventualno za promociaK-1
		total += (a%(b*n))/((k-1)*b) + (a%(b*n))/((k-1)*b) ;
	}
	else if (k-1 < n)
	{ // kupuvame po-evtino po promociaK-1
		total = (a/((k-1)*b))*n + a/((k-1)*b) ; // brProm*otNpaketa + promocionalni Broiki
		// ostavat (a%(b*(k-1))) pari eventualno za promociaN
		total += (a%(b*(k-1)))/(n*b) + (a%(b*(k-1)))/(n*b) ;
	}
	cout <<total ;
}
