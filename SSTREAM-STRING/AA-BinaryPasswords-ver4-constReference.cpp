// http://bgcoder.com/Contests/Practice/DownloadResource/206
#include <iostream>
#include <string>
using namespace std ;

int countChar (const string &s, const char c='*')
{
	int i, counter ;
	for (counter=i=0; i<s.size(); i++)
    if (s.at(i) == c)
  	  counter++;
	return counter;
}

int main ()
{ // ver 4-RELEASE: fastest, reliable and smallest code, 
  // const + & by reference for large parameter.
  string s ;
  cin >>s;
  cout <<(1LL<<countChar(s));
  return 0;
}
