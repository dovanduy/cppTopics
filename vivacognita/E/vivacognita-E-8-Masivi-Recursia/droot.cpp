#include <iostream>
using namespace std;

int sumDig (int n)
{
	int sum;
	for (sum=0; n !=0; n=n/10)
		sum+=n%10;
	return sum ;
}

bool eqDigits(int num)
{
	bool res;
	res = true;
	if (num<=9)
		return res ;
	for ( ; res && num>0; num=num/10)
	{
		res = (num%10 == (num/10%10)) ;
	} ;
	return res;	
}

int digRoot(int n)
{
	if (eqDigits(n))
		return (n%10);
	else if (sumDig(n)<=9)
		return (sumDig(n)) ;
	else
		return (digRoot(sumDig(n))) ;
}

int main ()
{
	int n;
	cin >>n;
	cout <<digRoot(n);
	return 0;
}
