// http://bgcoder.com/Contests/Practice/DownloadResource/206
#include <iostream>
#include <string>
using namespace std ;

int countChar (string s, char c='*')
{
	int i, counter ;
	for (counter=i=0; i<s.size(); i++)
    if (s.at(i) == c)
  	  counter++;
	return counter;
}

int main ()
{ // ver 2 uses BitWise operations
  string s ;
  cin >>s;
  cout <<(1LL<<countChar(s));
  return 0;
}
