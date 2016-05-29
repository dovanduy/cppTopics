/*	Lecture 1, 27-May-2016
	Home Work 1, Problem 1
1. Make a program that reads line from the keyboard
and checks how many upper and lower case letters 
and other characters are available in the string.
*/
//That source: Language standard (-std)  ISO C++11 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class strCounters : string
{
private:
	string myStr = "" ;
	int cntSmall, cntUpper, cntOther;
//	char ch ;
//	int cntCh ;
public:
	strCounters () 
	{
		getline(cin, myStr, '\n') ;
	}
/*
	int charCount (char c)
	{
		return count (this->myStr.begin(), this->myStr.end(), c) ;
	}
	
	strCounters (string str) : myStr(str)
	{
	}
	
	string show()
	{
		return this->myStr;
	}
*/
} ;
int main ()
{
	char a, b;
	int countA, countB;
//	cin >>a >>b;
	strCounters * countChar = new strCounters();
	countA = countChar->charCount(a);
	countA = countChar->charCount(b);
//	cout <<countChar->show();
	
	return 0;
}
