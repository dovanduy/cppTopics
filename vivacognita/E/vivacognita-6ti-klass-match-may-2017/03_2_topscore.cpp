#include <iostream>
using namespace std ;
const int ROWS = 200 ;
const int COLS = 100 ;

int main ()
{
	int m, n, colsOfMinRowVal[ROWS], 
		a[ROWS][COLS], brMinVal, minVal, maxVal ;
	bool isSedlo = false ;
	cin >>m >>n ;
	for (int i=0; i<m; ++i)
	  for (int j=0; j<n; ++j)
	    cin >>a[i][j] ;
	    
	for (int i=0 ; i<m; ++i)
	{
		minVal = a[i][0] ;
		for (int j=1; j<n; ++j)
		  if (minVal > a[i][j])
		  	minVal = a[i][j] ;
		brMinVal = 0 ;
		for (int j=0; j<n; ++j)
		  if (a[i][j] == minVal)
		    colsOfMinRowVal[brMinVal++] = j ;
/*		
		cout <<"\n===\n" ;
		for (int k=0 ; k<brMinVal; ++k)
			cout <<i <<' ' <<colsOfMinRowVal[k] <<endl ;
		cout <<"\n===\n" ;
*/		
		for (int k=0 ; k<brMinVal; ++k)
		{
			maxVal = a[0][colsOfMinRowVal[k]] ;
			for (int row=1; row<m; ++row)
			  if (maxVal < a[row][colsOfMinRowVal[k]])
			  	maxVal = a[row][colsOfMinRowVal[k]] ;
			  	
			if (maxVal == a[i][colsOfMinRowVal[k]])
			{
				isSedlo = true ;
				cout <<(i+1) <<' ' <<(colsOfMinRowVal[k]+1) <<endl;
			}
		} 
	} ;
	if ( ! isSedlo)
		cout <<"No" <<endl ;
	return 0 ;
}
