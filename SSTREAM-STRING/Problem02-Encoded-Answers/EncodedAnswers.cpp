#include <iostream>
//#include <cmath>
//#include <string>
#include <map>
const int D='a'-'A' ;
using namespace std;
int main ()
{
	char ch ;
	int n, ans ;
	map <char, unsigned long long> r ;
	cin >>n;
	for (int k=0; k<n; ++k)
	{
		cin >>ans ;
		ch=(char)((int)'a' + ans%4) ;
		
		auto it = r.find(ch) ;
		if (it != r.end())
			r.insert(make_pair(ch, 1));
		else
			(*it).second+=1 ;
		cout <<endl<<ch<<" "<<r[ch]<<endl;
	}	;
	for (auto k=r.begin() ; k != r.end(); ++k)
		cout <<(*k).first <<' ';
	cout <<endl <<(*r.begin()).first;
	for (auto k=r.begin() ; k != r.end(); ++k)
		cout  <<"Answer "<<(*k).first <<": "<<(*k).second
//		<< (r['A'])
		<<endl;
}
