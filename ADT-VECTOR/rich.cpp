#include <cstdio>
//#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
///*
void printA (int num)
{
	printf (" %d", num) ;
}
//*/

vector<int> a;

bool sortCond(int a, int b)
{ // reverse sorting condition
	return (a>b) ;
}

int main ()
{
	int num, smetka, lastA ;
	vector<int>::iterator it, endA, startRange, startA ;
	pair<vector<int>::iterator,vector<int>::iterator> indInterval;
	
	for (scanf("%d", &num) ; !feof(stdin); scanf("%d", &num) )
	{
		a.push_back(num) ;
	} ;
	smetka=a.back() ;
	a.pop_back() ;
//	sort(a.begin(), a.end());
	sort(a.begin(), a.end(), sortCond) ; // reverse sorting
//	printf ("%d\n\n\n", smetka) ;
//	for_each(a.begin(), a.end(), printA) ;

	startA= a.begin() ;
	endA = a.end() ;
	
	do
	{
		for (it=find(startA, endA, a.back()); smetka>0 && it != endA; ++it)
		{
			++(*it) ;
			--smetka;
//			printf ("\n==\t%d %d\n", (it-startA), *it) ;
		} ;
		/*
		for (it = startRange; (smetka>0) ; ) ;
		  if (it != startA && *(--it) == a.back())
		  {
		  	--smetka ;
		  	++(*it) ;
		  	printf ("\t%d\n", a.back()) ;
		  }
		  else if (it == startA && (*it == a.back()))
		  	{
		  		--smetka ;
		  		++(*it) ;
		  		break ;
		  	}
*/
	} while (smetka) ;
	printf ("%d\n", a.back()) ;
//	cout <<a.front() <<endl;
	return 0;
}
