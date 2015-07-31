// OGLEDALO.cpp
#include <iostream>
using namespace std;

main()
{
	int otrazeno, dig1plusDig2, dig1plusDig3, dig2plusDig3,
		dig1, dig2, dig3 ;
	char const DELIMITER = ' ' ;
	cin >>otrazeno >>dig1plusDig2 >>dig1plusDig3 >>dig2plusDig3  ;
	dig1 = 	(dig1plusDig2 + dig1plusDig3 - dig2plusDig3) / 2 ;
	dig3 = 	dig1plusDig3 - dig1 ;
	dig2 = 	dig2plusDig3 - dig3 ;
	cout 	<<dig1 <<DELIMITER <<((dig1 == otrazeno/100) ? "YES" : "NO") 	<<endl
			<<dig2 <<DELIMITER <<((dig2 == otrazeno/10%10) ? "YES" : "NO")	<<endl
			<<dig3 <<DELIMITER <<((dig3 == otrazeno%10) ? "YES" : "NO")		;
}
