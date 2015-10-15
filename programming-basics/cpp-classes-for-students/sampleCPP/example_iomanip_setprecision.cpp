#include <iostream>
#include <iomanip>
using namespace std ;
main ()
{
     const double pi=3.1415 ;
     cout <<setprecision(1) <<pi <<endl ;
     cout <<setprecision(1) <<setw(10) <<pi <<endl ;
     cout <<setprecision(3) <<setw(10) <<pi <<endl ;
     cout <<setprecision(5) <<setw(10) <<pi <<endl ;
     system ("pause") ;
 }
