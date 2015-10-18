#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, r, k, table [400] [400],
	tegla [400] [400] ;
vector<int> cells ;
vector<int>::iterator it;

int teglo (int i1, int i2)
{
	int maxCnt=-1, cnt, sum;
	cells.clear() ;

	for (int k=-r; k<r+1; k++)
	{
	  if (table[i1] [i2+k])
		cells.push_back(table[i1] [i2+k]);
	  if (table[i1+k] [i2])
		cells.push_back(table[i1+k] [i2]);
	  if (table[i1+k] [i2-k])
		cells.push_back(table[i1+k] [i2-k]);
	  if (table[i1-k] [i2+k])
		cells.push_back(table[i1-k] [i2+k]);
	}
		
	for(sum=0, it=cells.begin() ; 
		it != cells.end();
		sum+=(*it), ++it)
	  if ((cnt=count (cells.begin(), cells.end(), *it)) 
	       > maxCnt)
      {
		maxCnt = cnt ;
	  };
	  
/*	if (i1==r && i2==r)
	{
		printf("\n%d%c%d\n", maxCnt, ' ', sum) ;
		for (it=cells.begin(); it != cells.end(); ++it)
		  printf("%d%c", (*it), ' ') ;
	}*/
	return (maxCnt*sum) ;
}

void pretegli ()
{
  for (int i=r; i<n+r; i++)
	for (int k=r; k<n+r; k++)
	  tegla[i][k]=teglo(i, k) ;	
}

void init ()
{
	for (int i=0; i<200; i++)
	  for (int k=0; k<200; k++)
	    table[i] [k] = 0 ;
	// to READ
	scanf("%d", &n) ;
	scanf("%d", &r) ;
	scanf("%d", &k) ;
	for (int i=r; i<n+r; i++)
	  for (int k=r; k<n+r; k++)
	    scanf("%d", &table[i][k]) ;
	// init CALCs
	pretegli() ;	
}

void print ()
{//*
	for (int i=0; i<n+2*r; i++)
	{
	  printf("\n\n") ;
	  for (int k=0; k<n+2*r; k++)
	    printf("%d%c", table[i][k], ' ') ;
	} ;//*/
	printf("\n\n") ;
	for (int i=0; i<n+2*r; i++)
	{
	  printf("\n") ;
	  for (int k=0; k<n+2*r; k++)
	    printf("%d%c", tegla[i][k], ' ') ;
	}
}

int main ()
{
	init () ;
	print () ;
	return 0;
}
