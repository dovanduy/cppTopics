#include <iostream>
using namespace std ;
const int ROWS = 10+2 ;
const int COLS = 10+2 ;
int a [ROWS][COLS];
int m, n ;
int dx[] = { 0,  0, 1, -1} ;
int dy[] = {-1,  1, 0, 0} ;
void readMe () 
{
 	cin >>m >>n ;
	for (int rows = 1 ; rows < m+1; ++rows) 
	  for (int cols = 1 ; cols < n+1; ++cols)
	  {
	  	cin >>a[rows][cols] ;
	  }
}

void init ()
{
	for (int rows = 0 ; rows < ROWS; ++rows)
	  for (int cols =0; cols < COLS; ++cols)
	    a[rows][cols] = 0 ; // false
	readMe () ;
}

bool isIntoMatrix (int xP2, int yP2, int xP3, int yP3)
{
	return (bool)(a[xP2][yP2]*a[xP3][yP3]) ;
}

int calcSum (int x, int y)
{
	int sum = 0, maxSum = 0 ;
	for (int k1=0; k1<4; ++k1)
	for (int k2=0; k2<4 ; ++k2)
	{
		if (k1 != k2)
		{
			if (isIntoMatrix(x+dx[k1], y+dy[k1], x+dx[k2], y+dy[k2]))
				sum = 	a[x][y] + 
						a[x+dx[k1]][y+dy[k1]] + 
						a[x+dx[k2]][y+dy[k2]];
			if (sum>maxSum)
			maxSum = sum ;
		}
	} ;
	return maxSum ;
}

int main ()
{
	int sum=0, maxSum=0 ;
	init () ;
	for (int x=1 ; x<=m; ++x)
	  for (int y=1; y<=n; ++y)
	  {
	  	sum = calcSum(x, y) ;
	  	if (sum > maxSum)
	  	  maxSum = sum;
	  } ;
	cout <<maxSum <<endl ;
	return 0 ;
}
