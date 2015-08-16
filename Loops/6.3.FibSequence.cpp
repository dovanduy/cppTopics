// 6.3.FibSequence.cpp
#include <iostream>
using namespace std;
// http://bgcoder.com/Contests/161/Telerik-Kids-April-2014-6th-grade-Sunday

int main()
{
	long long	n, an, an1, 
				k, t ;
	cin >>n >>an >>an1 ;
	for (k=1; k<n; k++)
	{
		t = an1 - an;
		an1 = an ;
		an = t ;
	} ;
	cout <<an <<' ' <<an1;
}
