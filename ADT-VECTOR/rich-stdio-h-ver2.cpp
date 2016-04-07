#include <cstdio>
//#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
/*
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
	it=startRange=find(startA, endA, a.back()) ;
	
	do
	{
//		lastA=a.back() ;
		for (it=startRange; smetka>0 && it != endA; ++it)
		{
			++(*it) ;
			--smetka;
//			printf ("\n==\t%d %d\n", (it-startA), *it) ;
		} ;
		if (smetka>0)
		{
			if (startRange != startA)
			{
				it=startRange;
				--it;
				for ( ; smetka>0 && (*it==a.back()); )
				{
					++(*it) ;
					--smetka ;
					if (it != startA)
						--it;
					else // it==startA
					{
						break ;
					}
				} ;
				// after loop here I init startRange again
				if (*it==a.back())
					startRange=it;
				else
					startRange=++it;
			}
			else // startRange == startA
				it=startRange;
		}
	} while (smetka) ;
	printf ("%d\n", a.back()) ;
//	cout <<a.front() <<endl;
	return 0;
}
