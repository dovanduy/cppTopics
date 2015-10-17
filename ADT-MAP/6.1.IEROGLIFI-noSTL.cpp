// 6.1.IEROGLIFI-noSTL.cpp
// http://bgcoder.com/Contests/161/Telerik-Kids-April-2014-6th-grade-Sunday
#include <iostream>
#include <string>
using namespace std;
const int MAXQTYWORDS = 2000 ;

int n, m,
	dNum[MAXQTYWORDS], 
 	k, i, numWord ;
string res, dWord[MAXQTYWORDS] ;

int main ()
{
	cin >>n >>m ;
	for (k=0; k<n; k++) // set up a Dictionary
	  cin >>dNum[k] >>dWord[k] ;

	for (k=0, res=""; k<m-1; k++)
	 { // read Num and convert to word
	 	cin >>numWord;
	 	for (i=0; numWord != dNum[i] ; i++) ;
	 	res=res+dWord[i]+' ' ;
	 } ;
	// The last num proccessing
	cin >>numWord;
	for (i=0; numWord != dNum[i] ; i++) ;
	res=res+dWord[i] ;

	cout <<res ;
	return 0 ;
}
