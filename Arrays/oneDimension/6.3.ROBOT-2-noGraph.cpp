// 6.3.ROBOT-2-noGraph.cpp
// http://bgcoder.com/Contests/140/Telerik-Kids-January-2014-6th-grade-Sunday
#include <iostream>
using namespace std;

short n, b,
	k, countStep ;
short robiStep [100], m[5], res[4], steps[4];
bool sorted, isStep;

int main ()
{
	cin >>n >>b;
	m[0] = 0 ;
	for (k=0; k<n; k++)
		cin >>robiStep[k] ;
	for (k=1; k<4; k++)
		cin >>m[k] ;
	m[4] = b ;
	for (sorted=false; (! sorted); )
	  for (sorted=true, k=0; k<4; k++)
	    if (m[k]>m[k+1])
	    {
	    	b=m[k] ;
	    	m[k] = m[k+1] ;
	    	m[k+1] = b ;
			sorted = false ; 
	    };

	// Сега в  m пресмятаме разстоянието до следващия камък
	for (k=0; k<4; k++)
		steps[k] = m[k+1] - m[k] ;

	for (countStep=k=0; k<4; k++)
	  for (b=0, isStep=false; b<n && (! isStep); b++)
	    if (robiStep[b] == steps[k])
	    {
	    	res[countStep] = steps[k] ;
	    	countStep++ ;
	    	isStep = true ;
	    } ;
	if (countStep != 4)
		cout <<"NO" ;
	else
		for (k=1, cout<<res[0]; k<4; k++)
			cout <<' ' <<res[k] ;
	return 0 ;	
}
