// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <iostream>
#include <set>
const int D = (int)('a'-'A') ;
using namespace std ;
// more RAM and same speed as MAP or set solutions
int n, k;
int asciiCode;
char c;

// from set to MULTIset + same include used
multiset<char> myGoodChars ; 

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
		print ((char)(ch+D)); // lower letter
	} ;
	for (char ch='1'; ch<='9'; ch++)
	{
		print (ch) ;
	} ;
	print ('0') ;
	cout <<endl;
	return 0;
}
