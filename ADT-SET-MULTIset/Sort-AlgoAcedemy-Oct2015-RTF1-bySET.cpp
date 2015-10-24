// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <iostream>
#include <set>
const int D = (int)('a'-'A') ;
using namespace std ;
int main ()
{
	long n, k;
	int asciiCode;
	char c;
	set<char> myGoodChars ;
	//set<char>::iterator go;
	//pair<set<char>::iterator, bool> retCode ;
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
		if (myGoodChars.find(ch) != myGoodChars.end())
			cout <<ch;  // capital letter
		if (myGoodChars.find((char)(ch+D)) != myGoodChars.end())
			cout <<((char)(ch+D)); // lower letter
	} ;
	for (char ch='1'; ch<='9'; ch++)
	{
		if (myGoodChars.find(ch) != myGoodChars.end())
			cout <<ch;
	} ;
	if (myGoodChars.find('0') != myGoodChars.end())
			cout <<'0';
	cout <<endl;
	return 0;
}
