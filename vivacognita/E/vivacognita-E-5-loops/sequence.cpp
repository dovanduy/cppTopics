#include <iostream>
using namespace std;
int main ()
{
	int n, br=0, maxBr=0;
	unsigned long long int num, prevNum, maxNum ;
	cin >>n >>num;
	maxNum=prevNum=num;
	for (int k=0; k<n-1; k++)
	{
		if (num==prevNum)
		{
			br++;
			if (br>maxBr)
			{
				maxBr=br;
				maxNum=num;
			} ;	
		}
		else
		{ // num != prevNum
			br=1;
			prevNum=num;
		} ;
		cin >>num;
	} ;
	if (br>maxBr) 
		maxNum=num;
	cout <<maxNum <<endl;
	return 0;
}
