/*  
   intVarsEx1.cpp
   Name: ILARIONOV,	Fac. Num. 55331,      22-Aug-2010      
--------
   That is an example 1 about type int.
The example shows how to declare, to initialize and 
how to do some base calcucations.
*/

#include <iostream>

using namespace std ;

main ()
{
  int a=7, b=2 ;  // Declares two int variables and initializes them.
  unsigned long c =3L ;
  cout <<"\n\ta=" <<a <<"\tb=" <<b ; // ��������� a � b
  cout <<"\n\na+b="  <<(a+b) ;  // ��������
  cout <<"\n\na-b="  <<(a-b) ;  // ���������
  cout <<"\n\na*b="  <<(a*b) ;  // ���������
  cout <<"\n\na%b="  <<(a%b) ;  // ������� ��� ������� �� ���� �����
  cout <<"\n\na/b="  <<(a/b) ;  // ����������� �������
  cout <<"\n\n\t-b=" <<(-b) <<"\t- -b="<<(- -b);  // ������� �� ����
  cout <<"\n\n\t+b=" <<(+b) <<"\t+ -b="<<(+ -b);  // ������ ����� +
 }
