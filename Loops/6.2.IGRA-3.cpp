// 6.3.IGRA_3.cpp
// http://bgcoder.com/Contests/150/Telerik-Kids-February-2014-6th-grade-Sunday
#include <iostream>
using namespace std;

int	qtyMoves ;
char const DELIMITER = ' ' ;

short moveMe (short movingPos1, short oldPos2, short zarValue, short mapSize)
{
	int newPos ;
	newPos = ((movingPos1 + zarValue > mapSize ) ? movingPos1 : movingPos1 + zarValue ) ;
	if (newPos > 1) // no documented rule
	// mapSize=6, zarValue=6, p1=p2=1
		newPos += (oldPos2 == newPos) ? -1 : 0 ;
	return newPos ;
}

main()
{
	short mapSize, zarTodi, zarLoni,	// input
		moveSeqNum,
		posTodi, posLoni ;				//output
	cin >>qtyMoves >>mapSize  ;
	for (posLoni = 1, posTodi = 1, moveSeqNum = 1 ;
		 moveSeqNum <= qtyMoves && posTodi < mapSize && posLoni < mapSize ; moveSeqNum++)
	{
		cin >>zarTodi >>zarLoni ;
		posTodi = moveMe (posTodi, posLoni, zarTodi, mapSize) ;
		posLoni = moveMe (posLoni, posTodi, zarLoni, mapSize) ;	
	} ;
	cout <<posTodi <<DELIMITER <<posLoni <<endl <<((posLoni > posTodi) ? 'L' : 'T')	;
}
