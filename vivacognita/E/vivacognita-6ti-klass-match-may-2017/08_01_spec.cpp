// spec.cpp
#include <iostream>
#include <set>
using namespace std ;
typedef long long lng ;

set<lng> s ; // uniq nums only
set<lng> duplicates ;
pair<std::set<lng>::iterator, bool> insResult;

lng calc (lng i)
{
	lng num ;
	if (i == 1)
	{
		 num = 1 ;
		 insResult=s.insert(num) ;
		 if (! insResult.second)
		   duplicates.insert(num) ;
		 return num ;
	} ;
	
	num = calc(i-1) ;
	if (num > i)
	  num = num - i ;
	else
	  num = num + i ;
	insResult=s.insert(num) ;
		 if (! insResult.second)
		   duplicates.insert(num) ;
    return num ;
}
main ()
{
	lng n ;
	cin >>n;
	calc(n) ;
	cout <<duplicates.size() ;
}
