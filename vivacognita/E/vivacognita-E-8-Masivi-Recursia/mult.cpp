#include <iostream>
using namespace std;

int brDig [10] ;

void br(int num)
{
	for ( ; num != 0; num=num/10)
	{
		brDig[num%10]++ ;
	}
}

int main()
{
	int n, m, k, indDig ;
	cin >>n >>m;
	for (int i=1; i<=n; i++)
	  for (int j=1; j<=m; j++)
	  	br(i*j) ;
	
	for (indDig=k=0 ; k<10; k++)
	if (brDig[k]>brDig[indDig])
		indDig=k;
	
	cout <<indDig <<' ' <<brDig[indDig] ;
}
