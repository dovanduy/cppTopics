// more pointers
#include <iostream>
using namespace std;
// The two basic operations are:
// & means to get an address
// * means to get a value
int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 == 10
// now p2 points to &secondvalue, however 10==secondvalue  
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
	cout <<"*p1=" <<(*p1) <<" *p2="<<(*p2) 
	<<" 2ndval= " <<secondvalue // 15 != 2ndVal == 10
	<<'\n';
  p1 = p2;           // p1 = p2 (value of pointer is copied)
// Already p1==p2, i.e both pointers point to 2ndVal
  *p1 = 20;          // value pointed to by p1 = 20
// Now 2ndVal==20

// to print: 10 20
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
