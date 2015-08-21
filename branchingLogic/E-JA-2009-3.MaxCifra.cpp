#include<iostream>
using namespace std;
int main()
{
	int b, c, d, k,
		digB, digC, digD,
		maxDigit ;
	cin >>b >>c >>d >>k;
	switch (k)
	{
		case 1:{
			digB = b/100%10 ;
			digC = c/100%10 ;
			digD = d/100%10 ;
			break;
		}
		case 2:{
			digB = b/10%10 ;
			digC = c/10%10 ;
			digD = d/10%10 ;			
			break;
		}
		case 3:{
			digB = b%10 ;
			digC = c%10 ;
			digD = d%10 ;
			break;
		}
	} ;
	// 9+(A-5)>8  <=> a>4
	maxDigit = (digB>4) ? digB : 0 ;
	maxDigit = (digD>4 && digD>maxDigit) ? digD : maxDigit ;
	maxDigit = (digC>4 && digC>maxDigit) ? digC : maxDigit ;
	if (0==maxDigit)
		cout <<"No"<<endl ;  // arena requires <<endl
	else
		cout <<maxDigit<<endl;
 	return 0;
}
