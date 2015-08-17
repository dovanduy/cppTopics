// 6.1.PUL-TwoDimVectorOfVector-ver1.cpp
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
		x++ ; y++;
		if (board[x][y] == pull || board[x][y] == obratno)
		{
			res+=100 ;
			board[x][y] = prazno ;
		}

		if (board[x+1][y] == pull)
		{
			res+=10 ;
			board[x+1][y] = obratno ;
		}
		else if (board[x+1][y] == obratno)
		{
			res+=10 ;
			board[x+1][y] = prazno ;
		}
		if (board[x-1][y] == pull)
		{
			res+=10 ;
			board[x-1][y] = obratno ;
		}
		else if (board[x-1][y] == obratno)
		{
			res+=10 ;
			board[x-1][y] = prazno ;
		}
		if (board[x][y+1] == pull)
		{
			res+=10 ;
			board[x][y+1] = obratno ;
		}
		else if (board[x][y+1] == obratno)
		{
			res+=10 ;
			board[x][y+1] = prazno ;
		}
		if (board[x][y-1] == pull)
		{
			res+=10 ;
			board[x][y-1] = obratno ;
		}
		else if (board[x][y-1] == obratno)
		{
			res+=10 ;
			board[x][y-1] = prazno ;
		}
	} ;
	cout <<res ;
	return 0 ;	 	  	
}
