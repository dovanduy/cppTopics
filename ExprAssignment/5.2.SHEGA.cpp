// 5.2.SHEGA.cpp
#include <iostream>
using namespace std;

main ()
{
	long long n, // 100% long long
		 totalMililitri,
		 litri, mililitri;
	cin >>n ;
	totalMililitri = 785*n +3000*n ;
	cout <<totalMililitri/1000 <<' ' <<totalMililitri%1000 ;
}
