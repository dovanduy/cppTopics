// http://bgcoder.com/Contests/Practice/Index/132#1
#include <iostream>
#include <map> // https://www.youtube.com/watch?v=6iyzPed7FrM
using namespace std;
int main ()
{ 
	map <long long, long long> ans;
	map <long long, long long>::iterator i;
//	pair <map<long long, long long>::iterator, bool> retCode;
	long long cnt;
	long long a,
				res=0;
	for (cin >>cnt; cnt>0; cnt--)
	{
		cin >>a;
		if (ans.find(a) == ans.end())
		{
			//res += a+1 ;
			ans[a] = 1 ;
		}
		else ans[a]++ ;			
	} ;
	for (i=ans.begin();  i!=ans.end(); ++i)
	{
	cout <<endl <<(*i).first <<" " <<(*i).second ;
    if ((*i).first/(*i).second<=1)
      res += (*i).first+1 ;
    else
    	res += (*i).first+1 
		+ (*i).first/(*i).second*((*i).first+1) ;
    }
	cout <<"\n\n===\n"<<res;
}
// score 64/100 by set && without map.
