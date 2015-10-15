/*  
   sizeOfBaseTypes.cpp
   Name: ILARIONOV,	Fac. Num. 55331,      16-Aug-2010      
--------
   The programm checks and prints the sizes of C/C++ base types 
related to current PC architecture.
*/

#include <iostream>

using namespace std ;

main ()
{
   cout <<"The size of type char\t is\t"  <<sizeof(char)     <<" Byte/s\n" ;
   cout <<"The size of type bool\t is\t"  <<sizeof(bool)     <<" Byte/s\n" ;
   cout <<"The size of type short\t is\t" <<sizeof(short)    <<" Byte/s\n" ;
   cout <<"The size of type int\t is\t"   <<sizeof(int)      <<" Byte/s\n" ;
   cout <<"The size of type float\t is\t" <<sizeof(float)    <<" Byte/s\n" ;
   cout <<"The size of type double\t is\t"<<sizeof(double)   <<" Byte/s\n" ;
 }
