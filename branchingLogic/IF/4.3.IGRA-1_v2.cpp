// 4.3.IGRA_v2.cpp
#include <iostream>
using namespace std;

main()
{
	int m, p1, p2,
		k, p,
		resP1, resP2 ;
	char const DELIMITER = ' ' ;
	cin >>m >>p1 >>p2 >>k >>p  ;
	
		resP1 = ((p1 + k > m ) ? p1 : p1 + k ) ;
		resP1 += (p2 == resP1) ? -1 : 0 ;
		p1 = resP1 ;

		resP2 = ((p2 + p > m ) ? p2 : p2 + p ) ;
		resP2 += (p1 == resP2) ? -1 : 0 ;
		p2 = resP2 ;
	
	cout 	<<p1 <<DELIMITER <<p2		;
}
