#include <iostream>
#include <set>
const char endCh='.' ;
using namespace std;
int main ()
{
	set<int> fib;
//	set<int>::iterator it ;
	char ch ;
	int fib1=1, fib2=1, fibNum=2, br, res;
	fib.insert(fib1) ;
	fib.insert(fib2) ;
	for ( ; fibNum<30001; )
	{
		fibNum=fib1+fib2;
		fib.insert(fibNum) ;
		fib1=fib2; fib2=fibNum;
	} ;
/*
	for (it=fib.begin(); it!=fib.end(); ++it)
    	cout << *it <<endl;
*/
	for (br=1, res=0, cin>>ch; ch!=endCh; br++, cin>>ch)
		if (fib.find(br) != fib.end())
			res++;
	cout <<res <<endl ;
	return 0;
}
