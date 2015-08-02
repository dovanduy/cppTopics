// 5.3.EkoPyteka-enumFunc.cpp
#include <iostream>
using namespace std;
enum zoneStatus {nagore, ravno, nadolu};

zoneStatus findStatus (int zaslon, int nextZaslon)
{
	if (zaslon == nextZaslon)
		return ravno ;
	else if (zaslon < nextZaslon)
		return nagore ;
	else
		return nadolu ;
}

int main ()
{
	zoneStatus 	current2, prev2;
	int	  n, zaslon,
		  k, zaslon1H, zaslon2H,
		  totalCounter ; // ver 2 => ? nagoreCounter, ravnoCounter, nadoluCounter
	cin >>n ;
	if (1 == n)
		totalCounter = 0 ;
	else if (2 == n)
		totalCounter = 1 ;
	else 
	{ 	// n >= 3
		cin >>zaslon1H >>zaslon2H ;
		current2 = findStatus(zaslon1H, zaslon2H) ;
		for ( totalCounter = 1, k=3 ; k<=n ; k++ )
		{
			prev2 = current2 ;
			cin >>zaslon ;
			zaslon1H = zaslon2H ;
			zaslon2H = zaslon ;
			current2 = findStatus(zaslon1H, zaslon2H) ;
			if (prev2 != current2)
				totalCounter++ ;
		}
	} ;
	cout <<totalCounter ;
}
