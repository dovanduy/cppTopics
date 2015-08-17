// 6.2.Razli4niDumi.cpp
// http://bgcoder.com/Contests/186/Telerik-Kids-May-2014-6th-grade-Sunday
#include <iostream>
#include <string>
using namespace std;
const int MAXQTYWORDS = 1000 ;

int n,  // n == qtyTotalWords
	size, k, cntRazli4ni,
	m ; // m == qtyRazli4niDumi
string s;
struct word {
	int cnt ;
	string w ;
} ; 
word razWrd[MAXQTYWORDS] ;

int main ()
{
	cin >>n ;
	for (size=cntRazli4ni=0; n>0; n--)
	{
		cin >>s;
		for (k=0; k<size; k++)
		if (razWrd[k].w == s)
		{
			razWrd[k].cnt++ ;
			if (razWrd[k].cnt==1)
				cntRazli4ni-- ;
			break ;
		} ;
		if (k == size)
		{
			razWrd[k].cnt = 0;
			razWrd[k].w = s ;
			size++ ;
			cntRazli4ni++ ;
		}
	} ;
	cout <<cntRazli4ni <<endl;
	for (k=0; k<size && cntRazli4ni>0 ; k++)
	if (razWrd[k].cnt == 0)
	{
		cout <<razWrd[k].w <<endl;
		cntRazli4ni-- ;
	}
	return 0 ;
}
