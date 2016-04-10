#include <cstdio>
//#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
/*
void printA (int num)
{
	cout <<' ' <<num;
}*/

int main ()
{
	vector<int> a;
	int num, smetka ;
	vector<int>::iterator it ;
	pair<vector<int>::iterator,vector<int>::iterator> indInterval;
	
	for (scanf("%d", &num) ; !feof(stdin); scanf("%d", &num) )
	{
		a.push_back(num) ;
	} ;
	smetka=a.back() ;
	a.pop_back() ;
	sort(a.begin(), a.end()) ;
//	cout <<smetka;
//	for_each(a.begin(), a.end(), printA) ;
	do
	{
		indInterval = equal_range (a.begin(), a.end(), *a.begin()); 
		for (it = --indInterval.second; it != indInterval.first && smetka ; --it)
		{
			++(*it);
			--smetka;
		} ;
		if (smetka && (it==indInterval.first))
		{
			--smetka;
			++(*it);
		}
	} while (smetka) ;
	printf ("%d\n", a.front()) ;
//	cout <<a.front() <<endl;
	return 0;
}
