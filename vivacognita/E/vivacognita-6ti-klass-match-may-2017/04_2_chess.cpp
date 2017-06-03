#include <iostream>
#include <string>
using namespace std ;
const int ROWS = 10 ;
const int COLS = ROWS ;
const int BORDER = 0 ;
const int isPeshka = 1 ;
const int isQue = 2 ;
const int noFigure = 3 ;
const int qtyOfQue = 2 ;

int a [ROWS][COLS];
int queX [qtyOfQue] ;
int queY [qtyOfQue] ;

int processMe()
{
	int res = 0, d1, d2 ;
	for (int k=0 ; k<qtyOfQue; ++k)
	{
		d1 = 1; d2 = 1;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = -1; d2 = -1;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = -1; d2 = 1;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = 1; d2 = -1;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = 0; d2 = 1;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = 1; d2 = 0;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = 0; d2 = -1;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
		d1 = -1; d2 = 0;
		for (int t=1; BORDER != a[queX[k]+t*d1][queY[k]+t*d2]; ++t)
		{
			if (isPeshka==a[queX[k]+t*d1][queY[k]+t*d2])
				{
					++res ;
					a[queX[k]+t*d1][queY[k]+t*d2] = isQue ;
					break ;
				}
			else if (isQue==a[queX[k]+t*d1][queY[k]+t*d2])
					break ;
		} ;
	} ;
	return res ;
} 

int abcToInt (char c)
{
	return ((int)(c-'a')+1);
}

int charToDig (char c)
{
	return ((int)(c-'0')) ;
}

void readMe ()
{
	string line1, line2, line3 ;
	getline(cin, line1) ;
	a[abcToInt(line1[0])]
	[charToDig(line1[1])] = 
	isPeshka ;
	getline(cin, line2) ;
	a[abcToInt(line2[0])][charToDig(line2[1])] = isPeshka ;
	while (getline(cin, line3))
	{
		line1 = line2 ;
		line2 = line3 ;
		a[abcToInt(line2[0])][charToDig(line2[1])] = isPeshka ;
	} ;
	// to set Que Positions now.
	a[abcToInt(line2[0])][charToDig(line2[1])] = isQue ;
	queX[0] = abcToInt(line2[0]) ;
	queY[0] = charToDig(line2[1]) ;
	a[abcToInt(line1[0])][charToDig(line1[1])] = isQue ;
	queX[1] = abcToInt(line1[0]) ;
	queY[1] = charToDig(line1[1]) ;
}

void init ()
{
	for (int k = 0; k < COLS; ++k)
	{
		a[0][k] = a[ROWS-1][k] = 
		a[k][0] = a[k][COLS-1] = 0 ; // false border
	} ;
	for (int x=1; x<(COLS-1); ++x)
	  for (int y=1; y<(ROWS-1); ++y)
	    a[x][y] = noFigure ;
	readMe() ;
}

int main ()
{
	init () ;
	cout <<processMe() <<endl ;	
	return 0 ;
}
