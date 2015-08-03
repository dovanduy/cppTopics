// 5.1.Igra-MIDI4KI-intArray-RECURSION.cpp
#include <iostream>
using namespace std;

int movesQty (int br)
{
	if (br <= 1)
		return 0 ;
	else if (0 == br%3)
		return (1+movesQty(br/3)) ;
	else if (0 == br%2)
		return (1+movesQty(br/2)) ;
	else
		return (1+movesQty(br+1)) ;
}

main ()
{
	int brMoves[500] ; // max performance for that kind of solution
	int n, brMid,
		k, indMaxMoves, //moves,
		maxMoves ;
	cin >>n ;
	for (k=0 ; k<n; k++)
	{
		cin >>brMid;
		//moves = movesQty1(brMid) ;
		//cout <<moves <<' ';
		brMoves[k] = movesQty(brMid) ;
	} ;
	//cout <<endl<<"==="<<endl ;

	for (indMaxMoves = 0, k=1; k<n; k++)
		if (brMoves[k]>brMoves[indMaxMoves])
		indMaxMoves = k ;

	cout <<brMoves[indMaxMoves] <<endl <<indMaxMoves+1 ;

	for (k=indMaxMoves+1; k<n; k++)
		if (brMoves[k] == brMoves[indMaxMoves])
			cout <<' ' <<k+1;

}
