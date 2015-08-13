// SUBS-02.ChessBoardGame.cpp
#include <iostream>
#include <string>
using namespace std;

string s, r;
long k, lastInd;

int main()
{ // http://bgcoder.com/Contests/150/Telerik-Kids-February-2014-6th-grade-Sunday
	cin >>s;
	r="";
	for (k=0; k<s.length(); k++)
	if (k<s.length()-1 && s[k]<s[k+1] && (1 == (int)(s[k+1]-s[k])))
	{
		r=r+s[k] ;
		lastInd = k ;
		for ( ; (s[k]<s[k+1] && (1 == (int)(s[k+1]-s[k]))); k++) ;
	}
	else if (k<s.length()-1 && s[k]>s[k+1] && (1 == (int)(s[k]-s[k+1])))
	{
		for (  ; (s[k]>s[k+1] && (1 == (int)(s[k]-s[k+1]))) ; k++) ;
		r=r+(char)('A'+s[k]-'a') ;
		lastInd = k ;
	}
	else
	{
		r=r+s[k] ;
		lastInd = k ;	
	} ;

	cout <<r;
	return 0;
}
