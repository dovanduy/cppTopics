// 2-Dim Matrix as a PARAMETER
// Pointer passed as const, i.e. we can't change the pointer value
#include <iostream>
using namespace std;

void printMatrix (const int ** m, //we can't change both
// the pointer value either matrix values
	 int r, int c)
{ // SAFE way to use a matrix
//	m=m+1; //OK without const declaration 
	for (int i=0; i<r; ++i)
	{
	  for (int j=0; j<c; ++j)
	  {
//	  	m[i][j] = i+j; // NOW we caN'T change matrix values
	    cout <<m[i][j]<<' ' ;
	  }
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
	cout <<"\n===The exchanged matrix is as follows:\n";
	printMatrix (matrix, red, col) ;
// Here we can release memory (OP).
	return 0;
}
