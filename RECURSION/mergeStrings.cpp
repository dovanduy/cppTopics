/* Да се напише рекурсивна програма,
която слива два сортирани във възходящ ред символни низа. 
*/
#include <iostream>
#include <string>
using namespace std;
string str1 = "1467", str2 = "125678" ;
string mergeStrings(string s1, string s2)
{
	if (s1 == "")
		return s2;
	else if (s2 == "")
		return s1;
	else if (s1.front() <= s2.front())
	{
		string res;
		res = s1.front() + s2.front() ;
		s1.erase(s1.begin()+1) ;
		s2.erase(s2.begin()+1) ;
		res += mergeStrings(s1, s2) ;
		return res;
	}
		else // s1[0] > s2[0]
	{
		string res;
		res = s1.front() + s2.front() ;
		s1.erase(s1.begin()+1) ;
		s2.erase(s2.begin()+1) ;
		res += mergeStrings(s1, s2) ;
		return res;
	}
}
main ()
{
	cout <<mergeStrings(str1, str2) ;
}
