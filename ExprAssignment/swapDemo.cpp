#include <iostream>

using namespace std;

int n=1, m=2 ;
char p='A', q='Z' ;

int main ()
{
	swap(n, m) ;
	swap(p, q) ;
	cout <<n <<'\t' <<m <<endl
		<<p <<'\t' <<q ;
	return 0 ;
}
