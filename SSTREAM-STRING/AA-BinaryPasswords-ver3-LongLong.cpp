// http://bgcoder.com/Contests/Practice/DownloadResource/206
#include <iostream>
#include <string>
using namespace std ;

long long countChar (string s, char c='*')
{
	long long i;
	long long counter ;
	for (counter=i=0; i<s.size(); i++)
    if (s.at(i)==c)
  	  counter++;
	return counter;
}

int main ()
{ // ver 3 uses long long, no int
  string s ;
  cin >>s;
  cout <<(1LL<<countChar(s));
  return 0;
}
