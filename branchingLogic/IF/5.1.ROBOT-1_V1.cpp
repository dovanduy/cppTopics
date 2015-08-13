// 5.1.ROBOT_V1.cpp
#include <iostream>
using namespace std;

main ()
{	// V2 can be a graph intro
	int n, k, p, m1, m2, m3,
		min, max, mid, step1=0, step2=0, step3=0, step4=0 ;
	cin >>n >>k >>p >>m1 >>m2 >>m3 ;

	min = (m1 < m2)	 ? m1 : m2 ;
	min = (m3 < min) ? m3 : min ;
	max = (m1 > m2)  ? m1 : m2 ;
	max = (m3 > max) ? m3 : max ;
	mid = m1 - min + m2 - max + m3 ;
	
	if (min == k) // A => min
		step1 = k;
	else if (min == p)
		step1 = p;
	else
	{
		cout <<"NO" ;
		return 0 ;
	} ;
	
	if (mid - min == k) // min => mid
		step2 = k;
	else if (mid - min == p)
		step2 = p;
	else
	{
		cout <<"NO" ;
		return 0 ;
	} ;
	
	if (max - mid == k) // mid => max
		step3 = k;
	else if (max - mid == p)
		step3 = p;
	else
	{
		cout <<"NO" ;
		return 0 ;
	} ;

	if (n - max == k) // max => b
		step4 = k;
	else if (n - max == p)
		step4 = p;
	else
	{
		cout <<"NO" ;
		return 0 ;
	} ;
	
	if (0 != step1*step2*step3*step4)		
		cout <<step1 <<' ' <<step2 <<' ' <<step3 <<' ' <<step4;
	else
		cerr <<'?' ;
}
