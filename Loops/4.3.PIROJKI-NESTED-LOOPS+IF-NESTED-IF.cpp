#include <iostream>
using namespace std;
main ()
{
	int n, a, b, broiRazlNa4ini = 0 ;
	cin >>n >>a >>b;
	if (a>=n && b>=n)
	{
		broiRazlNa4ini += 2 ;
		a = b = n - 1 ;
	}
	else if (a>=n)
	{ // a>=n && b<n
		broiRazlNa4ini += 1 ;// vzimame samo ot vid a i 0 ot vid b
		a = n-1;
	}
	else if (b>=n)
	{ // a<n && b>=n
		broiRazlNa4ini += 1 ;// vzimame samo ot vid b i 0 ot vid a
		b = n-1 ;
	}
	// a<n && b<n
	int min = (a<b) ? a : b ;
	int max = (a>b) ? a : b ;
	for (int i=1; i<=max; i++)
		for (int k=1; k<=min; k++)
			if (i+k == n)
				broiRazlNa4ini++ ;
	cout <<broiRazlNa4ini ;
}
