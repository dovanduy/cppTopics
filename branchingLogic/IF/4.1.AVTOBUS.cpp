#include <iostream>
using namespace std;
main()
{
	int n, m, min, max;
	cin >>n >>m;
	if (n<=0 || m<0)
		cout <<"Impossible";
	else
	{ // n > 0 && m>=0
		if (n>m && 0 != m)
		{
			min=n;
			max=m+n-1;
		}
		else if (n>m && 0 == m)
			min=max=n;
		else if (n==m && m != 0)
		{
			min=n;
			max=n+(n-1);
		}
		else if (n==m && m == 0)
			cout <<"Impossible";
		else // n < m
			if (0==m)
			{
				cout <<"Impossible";
			}
			else // m != 0 && n < m
			{//ok
				max=n+(m-1);
				//min=m;
				min = (m<m+n-1) ? m : m+(n-1);
			};
		cout <<min<<" "<<max;
	}
}
