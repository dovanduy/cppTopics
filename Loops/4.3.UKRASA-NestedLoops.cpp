// 4.3.UKRASA.cpp
#include <iostream>
using namespace std;

main()
{
	char firstLetter,	// input variables as original and a set of
						// temporary variables during algo tilth. 
		 currentLetter = 'A', rowLnght = 1, loopCounter ;
	cin >>firstLetter ;

	if (firstLetter>='a' && firstLetter<='z')
		firstLetter = (char)('A'+(firstLetter-'a')) ;
		
	do {
		loopCounter = rowLnght ;
		do {
			cout <<currentLetter;
			loopCounter = loopCounter - 1 ;
		} while (loopCounter > 0) ;
		cout <<endl ;
		currentLetter = (char)(currentLetter + 1) ;
		rowLnght++ ;
	} while ( firstLetter >= currentLetter ) ;
}
