// 5.2.SHEGA.cpp
#include <iostream>
using namespace std;

main ()
{
	long long n, // 100% long long
		 totalMililitri,
		 litri, mililitri;
	cin >>n ;
	// galoni => mililitri
	totalMililitri = 785*n + 3000*n ;
	// and there are 2 results: Litri and Mililitri
	cout <<totalMililitri/1000 // calc Litri
	<<' ' <<totalMililitri%1000 ; // 2nd res is miliLitri
}
