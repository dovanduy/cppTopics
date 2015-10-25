// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <iostream>
#include <set>
const char D = 'a'-'A' ;
using namespace std ;

int n, k, asciiCode;
char c;

bool isCapital (char c) { return c>='A' && c<='Z' ;}

bool isLower (char c) { return c>='a' && c<='z' ; }

bool isDigit (char c) { return c>='1' && c<='9' ; }

bool isZero (char c) { return c=='0' ; }

struct cmp {
  bool operator() (const char& c1, const char& c2) const
  { // c1 <= c2
  	if (isZero(c2))
		return true ;
	else if (isZero(c1))
		return false ;
    else if (isDigit(c1) && isDigit(c2))
    	return c1<c2 ;
  	else if (isCapital(c1) && isLower(c2)
	   		&& c1+D == c2)
    	return true ;
    else if (isCapital(c1) && isLower(c2))
    	return c1+D<c2 ; 
    else if (isCapital(c1) && isCapital(c2))
    	return c1<c2 ;
    else if (isCapital(c1) && isDigit(c2))
    	return true ;
    else if (isLower(c1) && (isCapital(c2))
	         && (c1 == c2+D))
		return false ;
	else if (isLower(c1) && (isCapital(c2)))
    	return c1-D < c2 ;
    else if (isLower(c1) && (isLower(c2)))
    	return c1 <= c2 ;
    else if (isLower(c1) && isDigit(c2))
    	return true ;
  }
};

// customSORT  ? 20/100
multiset<char, cmp> myGoodChars ; 

bool isGoodChar (char c)
{
	return c!='x' &&
			(isLower(c) ||
			 isCapital(c) ||
			 isDigit(c) || isZero(c)) ;
}
int main ()
{
	cin >>n;
	myGoodChars.clear() ;
	for (k=0; k<n; k++)
	{
		cin >>asciiCode;
		if  (asciiCode>=32 && asciiCode<=126)
		{
			c=(char)asciiCode;
			if (isGoodChar(c))
				myGoodChars.insert(c) ;
		}
	} ;
	for (auto it=myGoodChars.begin(); it!=myGoodChars.end(); ++it)
		cout <<(*it) ;
	cout <<endl;
	return 0;
}
