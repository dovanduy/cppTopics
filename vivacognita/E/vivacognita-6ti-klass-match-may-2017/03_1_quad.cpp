#include <iostream>
using namespace std ;
const int ROWS = 100 ;
const int COLS = 100 ;
const char RAZDELITEL = ' ' ;
int main ()
{
	int a [ROWS][COLS], N, M, K, br = 0, iRow, jCol ;
	long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0 ;
	cin >>N >>M >>K ;
	for (int i=0; i<N; ++i)
	  for (int j=0; j<M; ++j)
		{
			cin >>a[i][j] ;
			if (++br == K)
			{
				iRow = i ;
				jCol = j ;
			}
		} ;
	for (int i=0; i<iRow; ++i)
	  for (int j=0 ; j<jCol; ++j)
		sum2 += a[i][j] ;
	for (int i=iRow+1; i<N; ++i)
	  for (int j=jCol+1; j<M; ++j)
		sum4 += a[i][j] ;
	for (int i=0; i<iRow; ++i)
	  for (int j=jCol+1; j<M; ++j)
		sum1 += a[i][j] ;
	for (int i=iRow+1; i<N; ++i)
	  for (int j=0; j<jCol; ++j)
		sum3 += a[i][j] ;
	cout <<sum1 <<RAZDELITEL <<sum2 <<RAZDELITEL
		 <<sum3 <<RAZDELITEL <<sum4 <<endl ;
	return 0 ;
}
