// SUBS-03.PLANE.cpp
#include <iostream>
using namespace std;

int main()
{
	int n,	// input
		x, y, maxX, distX, maxY, osY, osY1, osY2 ;
	char const STAR = '*' ;
	char const DOT = '.' ;
	cin >>n  ;
	maxX = 3*n ;
	osY = maxX/2+1 ;
	maxY = (3*n)-(n/2) ;
	//cout<<"maxX="<<maxX<<"\tosY="<<osY<<"\tmaxY="<<maxY<<endl;
	for (distX=0, y=1 ; osY-distX>=1 ; distX++, y++)
	{
	  for (x=1; x<=maxX; x++)
	  {
	  	if (x == osY-distX || x == osY+distX)
			cout <<STAR ;
		else
			cout <<DOT ;
	  }
	  cout <<endl;	
	  if (y >= n+1-(n-3)/2)
		  distX++;
	}
	
	osY1 = osY-(n/2)-1 ;
	osY2 = osY+(n/2)+1 ;
	for (distX=0; osY1-distX>1; distX=distX+2)
	{
		for (x=1; x<=maxX; x++)
		  if (x==1 || x==maxX || x==osY1 || x==osY2)
			cout <<STAR ;
		  else if (x==osY1-distX || x==osY2+distX)
		  	cout <<STAR ;
		  else
		  	cout <<DOT ;
		cout <<endl ;
	}
	
	for (distX=0; osY1-distX>1; distX++)
	{
		for (x=1; x<=maxX; x++)
		if (x==osY1-distX || x==osY2+distX)
			cout <<STAR ;
		else
			cout <<DOT ;
		cout <<endl ;
	}
	
	for (x=1; x<=maxX; x++)
		cout <<STAR;
	return 0 ;
}
