// 6.3.FibSequence-Recursion.cpp
#include <iostream>
using namespace std;
// http://bgcoder.com/Contests/161/Telerik-Kids-April-2014-6th-grade-Sunday

void a12 (long an, long an1, short n)
{
	if (1 == n)
		cout <<an <<' ' <<an1;
	else
		a12 (an1-an, an, n-1) ;
}

int main()
{
	short n ;
	long long	an, an1 ;
	cin >>n >>an >>an1 ;
	a12 (an, an1, n) ;
}
