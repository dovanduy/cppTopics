// 6.3.4EKMEDJE.cpp
#include <iostream>
using namespace std;
// http://bgcoder.com/Contests/140/Telerik-Kids-January-2014-6th-grade-Sunday

long n,
	r,
	row, col, k ;
long box [100][100], trBox[100][100] ; // nomerata na 4ekmedjetata
long m ;

main ()
{
	cin >>n ;
	for (row = 0 ; row<n ; row++)
	  for (col = 0; col<n; col++)
	  {
	  	cin >>box[row][col] ;
	  	trBox[col][row] = box[row][col] ;
	  }
	  	
	m = box[0][0] ;
	for (k=0; k<n; k++)
	  if (box[k][k] > m)
	  	m = box[k][k] ;
	  	
	for (r=0, row=0; row<n; row++ )
	  for (col=0; col<n; col++)
	    if (0 == trBox[row][col]%2)
	    {
	    	r++ ;
	    	break ;
	    } ;
	
	if (r==0 || m>n)
	{
		cout <<n <<' ' <<n ;
	}
	else
	  cout <<r <<' ' <<m ;
	  
}
