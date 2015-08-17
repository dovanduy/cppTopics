// 6.1.PUL-TwoDimVectorOfVector+Func-ver2.cpp
#include <iostream>
#include <vector>
using namespace std;
// http://bgcoder.com/Contests/186/Telerik-Kids-May-2014-6th-grade-Sunday
const unsigned long SIZE = 202 ;
int	n, k, m,  // n==squareSize, k==qtyPulove,  m == qtyOpiti
	x, y;
double res=0 ;
enum cell  {prazno, pull, obratno} ;
using row = vector<cell> ;
using square = vector<row> ;
square board ;
row t ;
const int frameCells[4][2]={{-1,0}, {1,0}, {0,-1}, {0,1}};

void checkCell (int x, int y)
{ int k ;
  if (board.at(x).at(y) != prazno)
  {
	res+=100 ;
	board.at(x).at(y) = prazno ;
  } ;
  for (k=0; k<4; k++)
  	{	
  		if (prazno != board.at(x+frameCells[k][0]).at(y+frameCells[k][1]))
  		{
			res+=10;
  			if (pull == board.at(x+frameCells[k][0]).at(y+frameCells[k][1]))
			  	board.at(x+frameCells[k][0]).at(y+frameCells[k][1]) = obratno ;
			else // obratno
			    board.at(x+frameCells[k][0]).at(y+frameCells[k][1]) = prazno ;
  		}
  	}	
}

int main()
{
	cin >>n >>k >>m;
	for (x = 0; x<n+2; x++)
	  t.push_back(prazno) ;
	for (y = 0; y<n+2; y++)
	  board.push_back(t) ;
	for ( ; k>0; k--)
	{
		cin >>x >>y ;
		board.at(x+1).at(y+1) = pull ;
	} ;
	for (res=0 ; m>0; m--)
	{
		cin >>x >>y;
		checkCell (++x, ++y) ;
	} ;
	cout <<res ;
	return 0 ;	 	  	
}
