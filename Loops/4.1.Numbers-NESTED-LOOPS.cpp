#include <iostream>
using namespace std;
main()
{
	int num, lastDigit, counter;
	counter=0;
	for (int i=0; i<3; i++)
	{
		cin >>num;
		do
		{
			lastDigit = num%10;
			num = num/10 ;
			if (0 != lastDigit%2 &&
			    0 != lastDigit%3)
			    counter++;
		}
		while (num != 0) ;
	}
	cout <<counter;
}
