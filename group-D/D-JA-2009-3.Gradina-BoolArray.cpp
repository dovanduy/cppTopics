// D-JA-2009-3.Gradina-BoolArray.cpp
#include <iostream>
using namespace std;
// https://arena.maycamp.com/practice/get_problem_description?contest_id=28&problem_id=59
main()
{
	int a, b, q, // input
		p, ind, halfP ;
	long long cnt; // broi trees
	double s ; // razstoianie
	bool t[400] ; // trees
	cin >>a >>b >>q ;
	halfP = a+b ;
	p = 2*halfP ;
	for (cnt=0; cnt<p; cnt++)
		t[cnt] = false ;
	for (s=ind=cnt=0; ! t[ind] ; 
	     ind=(ind+q)%p, cnt++, s+=2*((ind<=halfP)?ind:(p-ind))) 
		t[ind]=true ;
	cout <<cnt <<' ' <<s <<endl ;
}
