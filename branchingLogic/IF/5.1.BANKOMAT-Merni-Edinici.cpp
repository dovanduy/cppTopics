// 5.1.BANKOMAT.cpp
#include <iostream>
using namespace std;
enum colors {green, yellow, red};
main ()
{
	int n, m,
		broiKutii, totalStotinki,
		broiBanknoti10lv ;
	float  c ;
	cin >>n >>m >>c ;
	broiKutii = n/m + ((n%m == 0) ? 0 : 1) ;
	totalStotinki = (int)(c*100*broiKutii) ;
	broiBanknoti10lv = (totalStotinki/1000) +  ((totalStotinki%1000 == 0) ? 0 : 1) ;
	cout <<broiBanknoti10lv*10 ;
}
