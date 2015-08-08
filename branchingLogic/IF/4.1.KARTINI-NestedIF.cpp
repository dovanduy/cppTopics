// 4.1.KARTINI-NestedIF.cpp
#include <iostream>
using namespace std;
char const DELIMITER = ' ' ;

main()
{
	short a1, b1, a2, b2,
		maxPic1, maxPic2, minPic1, minPic2,
		res = 0 ;
	cin >>a1 >>b1 >>a2 >>b2  ;

	maxPic1 = (a1 > b1) ? a1 : b1 ;
	minPic1 = (a1 < b1) ? a1 : b1 ;
	maxPic2 = (a2 > b2) ? a2 : b2 ;
	minPic2 = (a2 < b2) ? a2 : b2 ;
	
	if (minPic1 != minPic2)
		res = maxPic1 + maxPic2 ;
	else if (maxPic1 > maxPic2 && minPic1 != maxPic2) // && minPic1 == minPic2
		res = maxPic1 + minPic2 ;
	else if (maxPic1 <= maxPic2 && maxPic1 != minPic2)
		res = minPic1 + maxPic2 ;
	else if (minPic1 != maxPic2)
		res = maxPic1 + minPic2 ;
	else if (maxPic1 != minPic2)
		res = minPic1 + maxPic2 ;
	else
		cerr <<'?' ;

	cout 	<<res		;
}
