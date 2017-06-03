#include <iostream>
using namespace std;
int main ()
{
	int broiCvetove, broiEdnoCvetni, minBroiEdnoCvetni = 21, sum=0, result ;
	cin >>broiCvetove ;
	do {
		cin >>broiEdnoCvetni ;
		sum += broiEdnoCvetni ;
		if (broiEdnoCvetni < minBroiEdnoCvetni)
			minBroiEdnoCvetni = broiEdnoCvetni ;
	} while (--broiCvetove > 0) ;
	result = sum - minBroiEdnoCvetni + 1 ;
	cout <<result ;
	return 0 ;
}
