// 6.1.PUL-TwoDimArrayStatic-ver3.cpp
// http://bgcoder.com/Contests/186/Telerik-Kids-May-2014-6th-grade-Sunday
#include <iostream>
using namespace std;

const unsigned long SIZE = 202 ;
int	n, k, m,  // n==squareSize, k==qtyPulove,  m == qtyOpiti
	x, y;
double res=0 ;
enum cell {prazno, pull, obratno} ;
cell board [SIZE] [SIZE] ;
const int frameCells[4][2]={{-1,0}, {1,0}, {0,-1}, {0,1}};

void checkCell (int x, int y)
{ int k ;
  if (board[x][y] != prazno)
  {
	res+=100 ;
	board[x][y] = prazno ;
  } ;
  for (k=0; k<4; k++)
  		if (prazno != board[x+frameCells[k][0]][y+frameCells[k][1]]) 
  		{
			res+=10;
  			if (pull == board[x+frameCells[k][0]][y+frameCells[k][1]])
			  	board[x+frameCells[k][0]][y+frameCells[k][1]] = obratno ;
			else // obratno
			    board[x+frameCells[k][0]][y+frameCells[k][1]]= prazno ;
  		}
}

int main()
{
	cin >>n >>k >>m;
	for (x = 0; x<n+2; x++)
	  for (y = 0; y<n+2; y++)
	    board[x][y] = prazno ;
	for ( ; k>0; k--)
	{
		cin >>x >>y ;
		board [x+1] [y+1] = pull ;
	} ;
	for (res=0 ; m>0; m--)
	{
		cin >>x >>y;
		checkCell (++x, ++y) ;
	} ;
	cout <<res ;
	return 0 ;	 	  	
}
