// 6.1.PUL-TwoDimArrayStatic-ver4.cpp
#include <iostream>
using namespace std;
// http://bgcoder.com/Contests/186/Telerik-Kids-May-2014-6th-grade-Sunday
const unsigned long SIZE = 202 ;
int	n, k, m,  // n==squareSize, k==qtyPulove,  m == qtyOpiti
	x, y;
double res=0 ;
enum cell {prazno, pull, obratno} ;
union masiv {
	cell board [SIZE] [SIZE] ;
	cell line [SIZE*SIZE] ;
};

masiv gameField ;

const int frameCells[4][2]={{-1,0}, {1,0}, {0,-1}, {0,1}};

void checkCell (int x, int y)
{ int k ;
  if (gameField.board[x][y] != prazno)
  {
	res+=100 ;
	gameField.board[x][y] = prazno ;
  } ;
  for (k=0; k<4; k++)
  		if (prazno != gameField.board[x+frameCells[k][0]][y+frameCells[k][1]]) 
  		{
			res+=10;
  			if (pull == gameField.board[x+frameCells[k][0]][y+frameCells[k][1]])
			  	gameField.board[x+frameCells[k][0]][y+frameCells[k][1]] = obratno ;
			else // obratno
			    gameField.board[x+frameCells[k][0]][y+frameCells[k][1]]= prazno ;
  		}
}

int main()
{
	cin >>n >>k >>m;
	for (x = 0; x<(n+2)*(n+2); x++)
	    gameField.line[x] = prazno ;
	for ( ; k>0; k--)
	{
		cin >>x >>y ;
		gameField.board [x+1] [y+1] = pull ;
	} ;
	for (res=0 ; m>0; m--)
	{
		cin >>x >>y;
		checkCell (++x, ++y) ;
	} ;
	cout <<res ;
	return 0 ;	 	  	
}
