// Basic Example about 2-dimensional dynamic array (by pointers)
// 2-Dim Matrix as a PARAMETER
#include <iostream>
using namespace std;

void printMatrix (int * m[], int r, int c)
{
	for (int i=0; i<r; ++i)
	{
	  for (int j=0; j<c; ++j)
	    cout <<*(m[i]+j)<<' ' ;
	  cout <<endl;
	}	
}
int main ()
{
	int red, col;
	int **matrix ;
	cin >>red >>col;
	matrix = new int*[red]; // array of pointers to int vars
// new statement allocates memory during prog execution
// i.e. dynamicaly array alocation
	for (int i=0; i<red; ++i)
		matrix[i] = new int[col] ; 
// matrix is array of 1-dim arrays
	for (int i=0; i<red; ++i)
	  for (int j=0; j<col; ++j)
	    cin >>matrix[i][j] ;
	cout <<"\n===\n";
	printMatrix (matrix, red, col) ;
// Here we can release memory (OP).
	return 0;
}
