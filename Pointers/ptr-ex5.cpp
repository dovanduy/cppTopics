// ptr-ex5.cpp
// STATIC vs DINAMIC memory allocation Example
#include <iostream>
using namespace std;

int main ()
{
// STATIC allocation
// number value is 88
// and number address is &number
int number = 88;
int * p1 = &number;  // Assign a "valid" address into pointer
cout <<"*p1= "<<*p1<<endl ;	// 88
// DYNAMIC Allocation
int * p2;            // Not initialize, points to somewhere which is invalid
// ETX char is nul
cout <<"p2= "<< p2 << endl; // Prints address before allocation
// new allocates memory NOW, dinamicaly
p2 = new int;       // DYNAMICALLY allocate an int and assign its address to pointer
                    // The pointer gets a valid address with memory allocated
*p2 = 99;
cout <<"after new p2= "<< p2 << endl;  // Prints address after allocation
cout <<"*p2= " << *p2 << endl; // Prints value point-to
delete p2;           // REMOVEs a dynamically allocated storage
cout <<"after delete p2= "<< p2 << endl;  
// p2 still points to same address
cout <<"after delete *p2= "<< *p2 << endl; // Prints value point-to
// however p2 value can be different
  return 0;
}
