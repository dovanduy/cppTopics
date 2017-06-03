// pairs.cpp
#include <iostream>
#include <set>
using namespace std ;
typedef unsigned short lng ;
typedef pair<lng, lng> dvoika ;
lng a[7000] ;
set<dvoika> s ; // uniq dvoiki chisla only
set<lng> uniq ;
pair<set<lng>::iterator, bool> insResult;

main ()
{
	int n, i, k;
	dvoika t ;
	cin >>n;
	for (i=0; i<n; ++i)
		cin >>a[i] ;
	for (i=0; i<n; ++i)
	{
	  t.first = a[i] ;
	  insResult=uniq.insert(a[i]) ;
	  if (insResult.second)
	  	for (k=i+1; k<n; ++k)
	  	{
	  		t.second = a[k] ;
			s.insert(t) ;
	  	} ;		
	}
	cout <<s.size() ;
}

