// 4.3.BUKVA.cpp
#include <iostream>
using namespace std;
const char NOLETTER = '*' ;
main()
{
	int seqNum ;
	char smallBig, res ;

	bool isBig, isLetter ;
	cin >>seqNum >>smallBig ;
	isBig = smallBig == 'b' ;
	if (isBig)
		res = ((char)('A' + seqNum-1));
	else
		res	 =	((char)('a' + seqNum-1)) ;
	isLetter = 	( (! isBig) && (res >= 'a') && (res <='z')) ||
				( (isBig) && (res >= 'A') && (res <='Z')) ;
	if (isLetter)
		cout <<res ;
	else
		cout <<NOLETTER ;
}
