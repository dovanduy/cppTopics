// http://stackoverflow.com/questions/16001803/pointer-to-pointer-dynamic-two-dimensional-array
#include <iostream>
using namespace std;

int main ()
{
	int red, col;
	int **matrix ;
	cin >>red >>col;
	matrix = new int*[red];
	for (int i=0; i<red; ++i)
		matrix[i] = new int[col] ;
	for (int i=0; i<red; ++i)
	  for (int j=0; j<col; ++j)
	    cin >>matrix[i][j] ;
	cout <<"\n===\n";
	for (int i=0; i<red; ++i)
	{
	  for (int j=0; j<col; ++j)
	    cout <<matrix[i][j]<<' ' ;
	  cout <<endl;
	}
	return 0;
}
