#include <iostream>
using namespace std;
main()
{
	int N, a, b, days=0;
	cin >>N >>a >>b;
	do
	{
		days++;
		if (days%2 == 1)
		{
			if (N%a != 0)
				N=N-N%a;
			else
				N=N-N/a;
		}
		else
		{
			if (N%b != 0)
				N=N-N%b;
			else
				N=N-N/b;
		}
	}
	while (N>0);
	cout <<days;
}
