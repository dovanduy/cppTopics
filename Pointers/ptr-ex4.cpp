// ptr-ex4.cpp
// pointers to pointer Example
#include <iostream>
using namespace std;

int main ()
{
	char a, x='1';
	char * b;
	char ** c;
	a = 'C';
	b = &a;
	c = &b;
	cout <<"\n1) " <<a <<' ' <<(*b) <<' ' <<(*(*c)); // C C C
	**c	= 'A'; // a='A' ;
	cout <<"\n2) " <<a <<' ' <<(*b) <<' ' <<(*(*c)); // A A A
	++**c;  // a=1+a;
	cout <<"\n3) " <<a <<' ' <<(*b) <<' ' <<(**c);   // B B B
	b = &x;
	cout <<"\n4) " <<a <<' ' <<(*b) <<' ' <<(**c);   // B 1 1
  return 0;
}
