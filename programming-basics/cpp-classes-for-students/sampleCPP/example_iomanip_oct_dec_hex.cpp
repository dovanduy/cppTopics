#include <iostream>
#include <iomanip>
using namespace std ;
main ()
{
     int a=8, b=15 ;
     cout <<setw(10)<<hex <<a <<setw(10) <<b <<endl ;
     cout <<setw(10)<<oct <<a <<setw(10) <<b <<endl ;
     cout <<setw(10)<<dec <<a <<setw(10) <<b <<endl ;
     system ("pause") ;
 }
