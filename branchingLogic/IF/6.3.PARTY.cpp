// 6.3.PARTY.cpp
// http://bgcoder.com/Contests/102/Telerik-Kids-October-2013-6th-grade-Sunday
#include <iostream>

using namespace std;

const int galon=3785 ; // милилитра
const int minML=250 ; // минл мл  за 1 служител
int main ()
{
	long long n, g,
		dopL, dopM ;
	cin >>n >>g;
	if (n*minML <= g*galon)
		cout <<"YES" ;
	else
	{
		dopL = (n*minML - g*galon)/1000 ;
		dopM = (n*minML - g*galon)%1000 ;
		cout <<dopL <<' ' <<dopM;
	}
	return 0 ;
}
