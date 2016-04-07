// http://stackoverflow.com/questions/16001803/pointer-to-pointer-dynamic-two-dimensional-array
#include <iostream>
using namespace std;

int main ()
{
	int n, k;
	int **matrix ;
	cin >>n >>k;
	matrix = new int*[n];
	for (int i=0; i<n; ++i)
		matrix[i] = new int[k] ;
	for (int i=0; i<n; ++i)
	  for (int j=0; j<k; ++j)
	    cin >>matrix[i][j] ;
	cout <<"\n===\n";
	for (int i=0; i<n; ++i)
	{
	  for (int j=0; j<k; ++j)
	    cout <<matrix[i][j]<<' ' ;
	  cout <<endl;
	}
	return 0;
}
