//#include <cstdio>
#include <iostream>
//#include <stdio.h>
#include <map>
#include <algorithm>
using namespace std;

map <int, int> a; // (brMoneti, brKup4ini)
map <int, int>::iterator it, next;

main ()
{
	int num, smetka, key ;
	
	for (; cin >>num; )
	{
		if ((it=a.find(num)) == a.end())
			a.insert ( pair<int, int>(num, 1)) ;
		else
			++a[num] ;
	} ;
	smetka=num ;
	if (a[num]==1)
	{
		a.erase(num) ;
	}
	else
		--a[num] ;
/*
	cout <<smetka <<"\n\n\n" ;
  	for (it=a.begin(); it!=a.end(); ++it)
    	cout << it->first << " => " << it->second << '\n';
//*/
	for (; ; )
	if(smetka <= (a.begin() -> first)*(a.begin()->second))
	{
		cout << ((it->first)+1) <<endl;
		break ;
	}
	else if (a.size() > 1)
	{ // smetka > (it -> first)*(it->second)
		smetka = smetka - (a.begin() -> first)*(a.begin()->second) ;
		a.begin()->second += 1 ;
		it = a.begin();
		next = ++it;
		if (a.begin()->second == (next->first))
		{
			next -> second += a.begin()->first ;
			a.erase(a.begin()->first) ;
		}
	}
	else // 1==a.size()
	{
		cout <<(smetka+(a.begin() -> first)*(a.begin() -> second)) ;
		break ;
	}
}
