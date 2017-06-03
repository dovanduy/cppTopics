#include <iostream>
#define SPACE ' '
using namespace std;
int main ()
{
	int m, n, num, maxInd ;
	int digCnt [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ;
	cin >>n >>m ; 
	for (int p=1 ; p<=m; ++p)
	  for (int q=1 ; q<=n; ++q)
	  {
	  	num = p*q ;
	  	do {
	  		++digCnt[num%10] ;
	  		num = num / 10 ;
		  } while (num != 0) ;
	  } ;
	maxInd = 0 ;
	for (int k=1; k < 10; ++k)
	  if (digCnt[k] > digCnt[maxInd])
	  	maxInd = k ;
	cout <<maxInd <<SPACE <<digCnt[maxInd] <<endl ;
	return 0 ;
}
