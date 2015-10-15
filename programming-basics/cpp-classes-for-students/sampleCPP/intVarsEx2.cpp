/*  
   intVarsEx2.cpp
   Name: ILARIONOV,	Fac. Num. 55331,      24-Aug-2010      
--------
   That is an example 2 about int type.
The example shows how to evaluate expressions.
*/

#include <iostream>

using namespace std ;

main ()
{
  int a=7, b=-2, c=3, d=5 ;
  cout <<"\na=" <<a <<"\tb=" <<b <<"\tc=" <<c <<"\td=" <<d <<"\n\n";  
  cout <<(a*b+c%d) <<"\t<-\ta*b+c%d\n\n" ;
  cout <<(a*(b+c)%d) <<"\t<-\ta*(b+c)%d\n\n" ;
  cout <<((a*b+c)%d) <<"\t<-\t(a*b+c)%d\n\n";
  cout <<(a*(b+c%d)) <<"\t<-\ta*(b+c%d)\n\n" ;
  cout <<(a*b+ - -c%d) <<"\t<-\ta*b+ - -c%d\n\n" ;
  cout <<(++a*b+++ - -c%d--) <<"\t<-\t++a*b+++ - -c%d--\n\n" ;
  cout <<"a=" <<a <<"\tb=" <<b <<"\tc=" <<c <<"\td=" <<d <<"\n\n" ;
 }
