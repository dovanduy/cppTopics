// 6.3.CENA-TwoDim-Example1.cpp
#include <iostream>
using namespace std;
// http://bgcoder.com/Contests/150/Telerik-Kids-February-2014-6th-grade-Sunday
// ver 2, ?s promenena ,trarsponirana vhodna matrica
long long mQty, nQty,  // m == qtyGoods, n == == qtyTowns
	m, n, d, p, newD;
long long predp[30], c[30][20],  // MxN 
	l[30], h[30],
	res=0 ; 
int main()
{
	cin >>mQty >>nQty;
	for (m=0; m<mQty; m++)
		cin >>predp[m] ;
	for (m=0; m<mQty; m++)
	  for(n=0 ; n<nQty ; n++)
	  	cin >>c[m][n] ; 

	for (m=0; m<mQty; m++)
	  for(n=0, l[m]=h[m]=c[m][0]; n<nQty ; n++)
		{
			if (c[m][n]<l[m])
				l[m]=c[m][n] ;
			if (c[m][n]>h[m])
				h[m]=c[m][n] ;
		} ;
	for (m=0; m<mQty; m++) // m e po masiv predp[]
	{
		if (predp[m]<l[m] || predp[m]>h[m]) // out of range rule
			res-=500 ;
		else
		{
			for (n=0, d=(predp[m]>c[m][0]) ? (predp[m]-c[m][0]) : (c[m][0]-predp[m]), p = c[m][0]; 
				n<nQty ; n++)
			if (0 == d)
			{
				p=predp[m] ;
				break ;
			}
			else {
				newD = (predp[m]>c[m][n]) ? (predp[m]-c[m][n]) : (c[m][n]-predp[m]);
				if (newD < d)
				{
					d = newD ;
					p = c[m][n] ;
				}
				else if (newD == d && p < c[m][n])
					p = c[m][n] ;
			}
			
			res+=p ;
		}
	} ;
	cout <<res ;	 	  	
}
