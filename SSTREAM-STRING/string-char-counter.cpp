#include <iostream>
#include <string>
using namespace std ;
int main ()
{ // How many '*' into s?
  string s ;
  int counter, i;
  for (counter=i=0, cin >>s; i<s.size(); i++)
  if (s.at(i)=='*')
  	counter++;
  cout <<counter;
  return 0;
}
