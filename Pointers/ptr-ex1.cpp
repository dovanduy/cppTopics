// Example 1: my first pointer
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer ; // to declare a pointer to int
  int * myPtr2;
  int * * myPtr3;
  int * myPtr4;
// TO GET address of firstvalue by &
  mypointer = &firstvalue; // to set-up a pointer
// * to use an address in mypointer
// * means a value
// & means address
  *mypointer = 1 ; // firstvalue=1 ;
  mypointer = &secondvalue; // set-up again
// And now mypointer points to secondvalue
  *mypointer = 22 ; // secondvalue=22;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue <<' ' <<(*mypointer)
  	<< '\n';
  myPtr2 = mypointer ;
  // myPtr2 is an address of mypointer
  // and mypointer points to somewhere
  // i.e. myPtr2 is pointer to another pointer
  cout <<"3. "<<(*myPtr2) <<'\n';
  myPtr3 = &myPtr2 ; // address of an address
  cout <<"4. "<<(*myPtr3) <<'\n' <<*(*myPtr3); // prints an hexadecimal address
 //? myPtr4=()(*myPtr3) ;
 // example ptr to ptr
 //? cout <"5. " <<(*myPtr4) <<endl ;
  *mypointer = 5;
  cout <<endl<<"It an address in mypointer now: "<<mypointer;
  return 0;
}
