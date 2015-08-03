// 5.1.Igra-MIDI4KI-RECURSION-Vec-Algo.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int movesQty (int br)
{
	if (1 == br)
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
	int n, brMid,
		k, //moves,
		maxMoves ;
	vector<int> brMoves ;
	cin >>n ;
	for (k=0 ; k<n; k++)
	{
		cin >>brMid;
		//moves = movesQty1(brMid) ;
		//cout <<moves <<' ';
		brMoves.push_back(movesQty(brMid)) ;
	} ;
	//cout <<endl<<"==="<<endl ;
	auto maxInd = max_element(brMoves.begin(), brMoves.end()) ;
	maxMoves = *maxInd ;
	cout <<maxMoves <<endl ; //   <<distance(begin(brMoves), maxInd) ;
	int maxCounter = count(brMoves.begin(), brMoves.end(), maxMoves) ;
	
	cout <<distance(begin(brMoves), maxInd)+1 ;
	if (maxCounter > 1)
	for (vector<int>::iterator i=++maxInd ; i != brMoves.end() ; ++i)
		if ((*i) == maxMoves)
		cout <<' ' <<distance(begin(brMoves), i)+1 ;
}
