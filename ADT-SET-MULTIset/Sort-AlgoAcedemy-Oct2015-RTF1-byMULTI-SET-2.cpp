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
  	if (isZero(&c2))
		return true ;
	else if (isZero(*c1))
		return false ;
    else if (isDigit(*c1) && isDigit(*c2))
    	return c1<c2 ;
  	else if (isCapital(*c1) && isLower(*c2))
    	return c1 < c2-D ;
    else if (isCapital(*c1) && isCapital(*c2))
    	return c1<c2 ;
    else if (isCapital(*c1) && isDigit(*c2))
    	return true ;
    else if (isLower(*c1) && (! isDigit(*c2)))
    	return c1-D < c2 ;
    else if (isLower(*c1) && isDigit(*c2))
    	return true ;
  }
};

// from set to MULTIset + same include used
multiset<char, cmp> myGoodChars ; 

void print (char c)
{
	for (auto it = myGoodChars.find(c);
		(*it) == c && it != myGoodChars.end();
		it++)
		  cout <<c;
}

int main ()
{
	cin >>n;
	for (k=0; k<n; k++)
	{
		cin >>asciiCode;
		if  (asciiCode>=32 && asciiCode<=126)
		{
			c=(char)asciiCode;
			if (c!='x' &&
			((c>='a' && c<='z') ||
			(c>='A' && c<='Z') ||
			(c>='0' && c<='9')))
				myGoodChars.insert(c) ;
		}
	} ;
	for (char ch='A'; ch<='Z'; ch++)
	{
		print (ch);  // capital letter
		print (ch+D); // lower letter
	} ;
	for (char ch='1'; ch<='9'; ch++)
	{
		print (ch) ;
	} ;
	print ('0') ;
	cout <<endl;
	return 0;
}
