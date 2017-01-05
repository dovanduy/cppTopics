#include <iostream>
using namespace std ;
main ()
{
	double matrix [5][7];
	
	for (int row=0; row<5; ++row)
		for (int col=0; col<7; ++col)
		// matrix initialization
		  matrix [row][col] = 51.55 ;
	
	for (int row=0; row<5; ++row)
		for (int col=0; col<7; ++col)
		// decrement by 50.55
		  matrix [row][col] -= 50.55 ;
		 
	// and now to print matrix
	for (int row=0; row<5; ++row)
	{
		for (int col=0; col<7; ++col)
		 cout <<matrix[row][col] <<' ';
		cout <<endl ;
	}
}
