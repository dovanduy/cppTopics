// http://bgcoder.com/Contests/Practice/DownloadResource/206
#include <iostream>
#include <string>
using namespace std ;
int countChar (string s, char c='*')
{
	int i, counter ;
	for (counter=i=0; i<s.size(); i++)
    if (s.at(i)==c)
  	  counter++;
	return counter;
}
int main ()
{
  string s ;
  long long res=1;
  cin >>s;

  for (int cnt=countChar(s) ; cnt>0; cnt--)
  	res=2*res;

  cout <<res;
  return 0;
}
