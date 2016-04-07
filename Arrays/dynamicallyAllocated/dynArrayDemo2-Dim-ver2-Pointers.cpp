// Basic Example about 2-dimensional dynamic array (by pointers)
// http://stackoverflow.com/questions/16001803/pointer-to-pointer-dynamic-two-dimensional-array
#include <iostream>
using namespace std;

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
	for (int i=0; i<red; ++i)
	{
	  for (int j=0; j<col; ++j)
// *(matrix+i) is pointer to an array.
// The above array (ptr) is an [i] row. The row consists of cols.
// We access a matrix element as a member of array for [i] row.
	    cout <<*(*(matrix+i)+j)<<' ' ; // matrix[i][j]
	  cout <<endl;
	}
// Here we can release memory (OP).
	return 0;
}
