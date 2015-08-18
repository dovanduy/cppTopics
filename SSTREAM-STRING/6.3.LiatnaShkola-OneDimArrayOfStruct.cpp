// 6.3.LiatnaShkola-OneDimArrayOfStruct.cpp
// http://bgcoder.com/Contests/186/Telerik-Kids-May-2014-6th-grade-Sunday
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//const int SIZE = 20000 ;

int n, m, k, // n==grE  m==grD
	size, p, points, qtyG, qtyB, firstBoy, lastBoy, lastGirl,
	pB, pG ;
char sex ;
string s[SIZE] ;
string w;

bool wayToSort(string i, string j) { return i > j ; }

int main ()
{
	cin >>n >>m >>k ;
	for (p=0; p<n+m; p++)
	{
		cin >>points >>sex ;
		w = sex ;
		w = w + (char)(points/1000%10+'0') ;
		w = w + (char)(points/100%10+'0')  ;
		w = w + (char)(points/10%10+'0') ;
		w = w + (char)(points%10+'0') ;
		s.push_back(w) ;
	} ;
/*
	for (bool sorted=false; (!sorted); )
	  for (sorted=true, p=0; p<n+m-1; p++)
	  {
	  	if (s[p]<s[p+1])
	  	{
	  		swap (s[p], s[p+1]) ;
	  		sorted = false ;
	  	}
	  } ;
*/
	sort (s.begin(), s.end()) ;
//	  for (p=0; p<n+m; p++) cout <<'\t' <<s[p] <<endl;
	for (p=0; p<k && s[p][0] == 'G'; p++) ;
	
	if (s[p][0] == 'B')
	{
		lastGirl = p-1 ;
		firstBoy=p;
	}
	else
	{
		lastGirl=p-1 ;
		for ( ; s[p][0] == 'G'; p++) ;
		firstBoy=p;
	}
	qtyG=lastGirl+1 ;
	//cout <<"\n"<<"lG="<<lastGirl <<"\tqtyG="<<qtyG <<endl;
	
	for (p=firstBoy; p<firstBoy+k+k-qtyG; p++) ;
	if (p == firstBoy+k+k-qtyG)
	{
		lastBoy = p-1 ;
	} 
	else
		lastBoy = p ;
		 ;
	//cout <<"\n"<<"lG="<<lastGirl <<"\tlB="<<lastBoy<<'\t'<<s[lastGirl]<<'\t'<<s[lastBoy] <<endl;
	pG = (s[lastGirl][1]-'0')*1000 + 
		 (s[lastGirl][2]-'0')*100 + 
		 (s[lastGirl][3]-'0')*10 + 
		 (s[lastGirl][4]-'0') ;
	pB = (s[lastBoy][1]-'0')*1000 + 
		 (s[lastBoy][2]-'0')*100 + 
		 (s[lastBoy][3]-'0')*10 + 
		 (s[lastBoy][4]-'0') ;
	cout <<pB <<' ' <<pG;
	return 0 ;
}
