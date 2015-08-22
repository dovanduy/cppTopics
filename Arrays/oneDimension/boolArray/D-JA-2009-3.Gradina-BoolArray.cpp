// D-JA-2009-3.Gradina-BoolArray.cpp
#include <iostream>
using namespace std;

main()
{
	int a, b, q,
		p, ind, halfP ;
	long long cnt;
	double s ;
	bool t[1000*1000] ;
	cin >>a >>b >>q ;
	halfP = a+b;
	p = 2*halfP ;
	for (cnt=0; cnt<p; cnt++)
		t[cnt] = false ;
	for (s=ind=cnt=0; ! t[ind] ; 
	     ind=(ind+q)%p, cnt++, s+=2*((ind<=halfP)?ind:(p-ind))) 
		t[ind]=true ;
	cout <<cnt <<' ' <<s<<endl;
}
