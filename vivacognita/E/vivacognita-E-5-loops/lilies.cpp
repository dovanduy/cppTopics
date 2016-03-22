#include <iostream>
using namespace std;
main ()
{
	int n, brLuc, min, sum;
	cin >>n;
	for (sum=0, min=21; n != 0; n--)
	{
		cin >>brLuc;
		sum += brLuc;
		if (brLuc<min)
			min = brLuc;
	} ;
	cout <<(sum-(min-1)) <<endl ;
}
