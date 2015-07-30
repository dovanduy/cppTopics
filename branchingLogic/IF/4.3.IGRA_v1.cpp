// 4.3.IGRA_v1.cpp
#include <iostream>
using namespace std;

main()
{
	int m, p1, p2,
		k, p,
		resP1, resP2 ;
	char const DELIMITER = ' ' ;
	cin >>m >>p1 >>p2 >>k >>p  ;
	
	if (p1 > p2)
	{
		resP1 = ((p1 + k > m ) ? p1 : p1 + k ) ;
		p1 = resP1 ;
	}
	else
	{
		resP1 = ((p1 + k > m ) ? p1 : p1 + k ) ;
		resP1 += (p2 == resP1) ? -1 : 0 ;
		p1 = resP1 ;
	} ;
	
	if (p2 > p1)
	{
		resP2 = ((p2 + p > m ) ? p2 : p2 + p ) ;
		p2 = resP2 ;
	}
	else
	{
		resP2 = ((p2 + p > m ) ? p2 : p2 + p ) ;
		resP2 += (p1 == resP2) ? -1 : 0 ;
		p2 = resP2 ;
	}
	
	cout 	<<p1 <<DELIMITER <<p2		;
}
