#include <iostream>
using namespace std;
main ()
{
	int n, daysOff=0;
	cin >>n;
	for (int i=1; i<=n; i++)
	if (i%7==0 || i%7==6)
		daysOff++;
	cout <<(n-daysOff);
}
