// D-JA-2009-3.Gradina-STL-BITSET.cpp
#include <iostream>
// http://en.cppreference.com/w/cpp/utility/bitset/bitset
// http://www.cplusplus.com/reference/bitset/bitset/operator[]/
#include <bitset>
using namespace std;
// https://arena.maycamp.com/practice/get_problem_description?contest_id=28&problem_id=59
main()
{
	int a, b, q, // input
		p, ind, halfP ;
	long long cnt; // broi trees
	double s ; // razstoianie
	bitset<1000*1000> t ; // trees [0,0,0,0,0,0,0,0,0,..,0,0,0]
	cin >>a >>b >>q ;
	halfP = a+b ;
	p = 2*halfP ;
	for (s=ind=cnt=0; ! t[ind] ; 
	     ind=(ind+q)%p, cnt++, s+=2*((ind<=halfP)?ind:(p-ind))) 
		t.set(ind) ;
	cout <<cnt <<' ' <<s <<endl ;
}
