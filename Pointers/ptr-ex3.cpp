// ptr-ex3.cpp
// array by pointers Example
#include <iostream>
using namespace std;

int main ()
{
  int numbers [5] ;
  int * p;
  p = numbers; // points to beginning of an array numbers  
  	*p = 10; // a[0]=10 ;
  p++; // incremet by int size and p points to net int array member  
  	*p = 11; // a[1]=11 ;
  p = &numbers[2]; // now p points to 3rd int into numbers
    *p = 12; // a[2]=12 ;
// pointer's arithmetics:
// add 3 int sizes to numbers. 
  p = numbers + 3;
// numbers points to beginning of an array numbers
  *p = 13; // a[3]=13
  
  p = numbers;  
  *(p+4) = 14; // a[4]=14, 4 array members after array start
  for (int n=0; n<5; n++)
    cout << numbers[n] << ' ';	// 10 11 12 13 14
  return 0;
}
