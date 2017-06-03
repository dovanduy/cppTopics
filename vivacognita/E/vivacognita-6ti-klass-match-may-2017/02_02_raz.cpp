#include <iostream>
#include <cmath>
#define SPACE ' '
using namespace std;
int main ()
{
	int n, maxDel, minRaz, del1, del2, minDel1, minDel2 ;
	double root2 ;
	cin >>n;
	minRaz = n+1 ;
	root2 = sqrt(n) ;
	maxDel = (int)root2 ;
	for (int k=1; k<=maxDel; ++k)
	{
		if (0 == n%k)
		{
			del1 = n / k ;
			del2 = n / del1 ;
			if(abs(del1-del2) < minRaz)
			{
					minRaz = abs(del1-del2) ;
					minDel1 = del1 ;
					minDel2 = del2 ;
			}
		}
	} ;
	cout <<minDel2 <<SPACE <<minDel1 <<endl ;
	return 0 ;
}
