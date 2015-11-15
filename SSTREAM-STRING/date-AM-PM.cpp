// https://www.hackerrank.com/challenges/time-conversion
#include <iostream>
#include <string>
using namespace std;
const char PM='P' ;
const char Z='0' ;
int main ()
{
	string inpDate, res ;
	cin >>inpDate ;
	if (inpDate=="12:00:00AM")
	{
		res = inpDate.erase(8, 2) ;
		res[0] = res[1] = 'Z' ;
		// res="00:mm:ss" ;
	}
	else if (inpDate[0] == '1' &&
			 inpDate[1] == '2' &&
			 inpDate[8]==PM)
	{
		res = inpDate.erase(8, 2) ;
	}
	else if (inpDate[8]!=PM)
		res = inpDate.erase(8, 2) ;
	else // + 12 hours
	{ // PM
		res = inpDate.erase(8, 2) ;
		int hh1 = res[0]-Z ;
		int hh2 = res[1]-Z ;
		int hh = hh1*10 + hh2 + 12 ;
		res[0] = (char)(hh/10 + Z) ;
		res[1] = (char)(hh%10 + Z) ;
	} ;
	cout <<res;
	return 0 ;
}
