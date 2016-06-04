#include <iostream>
//#include <cmath>
#include <string>
//#include <vector>
using namespace std;
// https://judge.softuni.bg/Contests/163/Programming-Basics-Exam-21-February-2016
int main ()
{
	char ch ;
	int n;
	unsigned long long ans ; // It is 100/100 now.
	string r = "";
	unsigned long long cnt[4]; // 80/100, tests 2, 6 fail if ans is int simply
//	long double cnt[4] ; // 80/100, tests 2, 6 fail
	for (int k=0; k<4 ; ++k)
		cnt[k] = 0L ;
	cin >>n;
	for (int k=0; k<n; ++k)
	{
		cin >>ans ;
		ans = ans%4 ;
		ch=(char)((int)'a'+ans) ;
		r += ch ;
		r += ' ';
		++cnt[ans] ;
	}	;
	cout <<r <<endl;
	for (int k=0; k<4 ; ++k)
		cout <<"Answer "<<((char)('A'+k))<<": "<<cnt[k] <<endl;
}
