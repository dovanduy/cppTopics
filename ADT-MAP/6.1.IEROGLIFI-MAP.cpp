// 6.1.IEROGLIFI-noSTL.cpp
// http://bgcoder.com/Contests/161/Telerik-Kids-April-2014-6th-grade-Sunday
#include <iostream>
#include <map>
#include <string>
using namespace std;

int n, m,
	k, num ;
map<int, string> dict ;
string res,
	s ;

int main ()
{
	cin >>n >>m ;
	for (k=0; k<n; k++) // set up a Dictionary
	{
		cin >>num >>s ;
		dict.insert(make_pair(num, s)) ;
	}

	for (k=0, res=""; k<m-1; k++)
	 { // read Num and convert to word
	 	cin >>num; 
	 	res=res+(*dict.find(num)).second+' ' ;
	 } ;
	// The last num proccessing
	cin >>num;
	res=res+(*dict.find(num)).second ;

	cout <<res ;
	return 0 ;
}
