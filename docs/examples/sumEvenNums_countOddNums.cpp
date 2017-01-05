#include <iostream>
using namespace std ;
main ()
{
	int n, a, br=0;
	long long sum = 0;
	cin >>n;
	for (int k=0; k<n; ++k)
	{
		cin >>a;
		if (0==a%2)
			sum = sum + a;
		else
			++br ;
	}
	cout <<"The even number sum is " <<sum <<"."<<endl
		<<"There are " <<br <<" odd numbers." ;
}
