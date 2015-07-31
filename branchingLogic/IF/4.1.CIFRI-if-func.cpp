// CIFRI.cpp
#include <iostream>
using namespace std;

bool isDigit(char ch)
{
	if (ch >= '0' && ch <= '9')
		return true ;
	else
		return false ;
}

short dig (char c)
{
	if (isDigit (c))
		return ((short)(c-'0')) ;
	else
		return (short)(0) ;
}
main()
{
	char c1, c2, c3, c4, c5, c6 ;
	bool areDigits ;
	cin >>c1 >>c2 >>c3 >>c4 >>c5 >>c6  ;
	areDigits = isDigit(c1) || isDigit(c2) || isDigit(c3) ||
				isDigit(c4) || isDigit(c5) || isDigit(c6) ;
	if (! areDigits)
		cout <<"NO DIGITS" ;
	else
		cout <<(isDigit(c1) + isDigit(c2) + isDigit(c3) +
				isDigit(c4) + isDigit(c5) + isDigit(c6)) <<' '
		<<(dig(c1) + dig(c2) + dig(c3) + dig(c4) + dig(c5) + dig(c6));
}
