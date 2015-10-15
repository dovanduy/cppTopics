/*
	charVarEx1.cpp
	Name: ILARIONOV,	Fac. Num. 55331,  27-Aug-2010
--------
   That is an example 1 about char type.
The example shows char basics.
*/

#include <iostream>

using	namespace std ;

main ()
{
	char ch = 'c', nextChar = ch+1, prevChar = ch-1;
    cout    <<"\nprevChar is " <<prevChar ;
	cout    <<"\t\t ch is " <<ch ;
    cout    <<"\t\t nextChar is " <<nextChar ;
    cout    <<'\n'  ; // New Line
    cout    <<'\a'  ; // Bell
    cout    <<"\t++ch is "   <<(++ch) <<'\n' ;
    cout <<"\\120 is " <<'\120' <<'\n' ;
}

