// IGRA_v3.cpp
#include <iostream>
using namespace std;

int moveMe (int movingPos1, int oldPos2, int zarValue, int mapSize)
{
	int newPos ;
	newPos = ((movingPos1 + zarValue > mapSize ) ? movingPos1 : movingPos1 + zarValue ) ;
	newPos += (oldPos2 == newPos) ? -1 : 0 ;
	return newPos ;
}
main()
{
	int m, p1, p2,
		k, p ;
	char const DELIMITER = ' ' ;
	cin >>m >>p1 >>p2 >>k >>p  ;

	p1 = moveMe (p1, p2, k, m) ;
	p2 = moveMe (p2, p1, p, m) ;
	
	cout 	<<p1 <<DELIMITER <<p2		;
}
