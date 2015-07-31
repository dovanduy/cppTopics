// 5.2.SNEJNI-TOPKI-cmath.cpp
#include <iostream>
#include <cmath>
using namespace std;

main ()
{
	int n, d,
		currentDistance, currentNum, currentPlayer, opitSeqNum,
		bestPlayer, bestDistance  ;
	cin >>n >>d ;
	
	cin >>currentNum ;
	bestPlayer = 1 ;
	bestDistance = abs (d - currentNum) ;
	if (0 == bestDistance)
	{
		cout <<"win" <<endl <<bestPlayer;
		return 0 ;
	} ;
	for (	opitSeqNum = 2, currentPlayer = 2 ; 
			opitSeqNum <= 2*n; 
			opitSeqNum++, currentPlayer++)
	{
		if (currentPlayer > n) // to update the player seq num
			currentPlayer = 1;
		cin >>currentNum ;
		currentDistance = abs(d - currentNum) ;
		if (0 == currentDistance) // Is the winer move?
			{
				cout <<"win" <<endl <<currentPlayer;
				return 0 ;
			} ;
		if (currentDistance < bestDistance) // Is the better move?
		{
			bestDistance = currentDistance ;
			bestPlayer	 = currentPlayer ;
		}
	}
	cout <<bestPlayer <<' ' <<bestDistance ;
}
