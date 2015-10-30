// http://bgcoder.com/Contests/Practice/Index/268#2
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems/Problem%20-%20Match
// https://en.wikipedia.org/wiki/Longest_common_substring_problem
// http://www.geeksforgeeks.org/longest-common-substring/

#include<iostream>
#include<string>
#include <deque>
using namespace std;

string x ; // "-=input=-"
string y ; // "put-=42"
deque<string> subStrs;

int main()
{
	string t;
	long maxLngth=-1;
 	cin >>x >>y;
    int xl = x.length() ;
    int yl = y.length() ;
 	if (xl>yl)
 	{ // The string x wil be shorter than y.
 		t=x;
 		x=y;
 		y=t;
 	} ; // The string x can be into a string y.
 	for ( subStrs.push_front(x) ; !subStrs.empty() ; subStrs.pop_back() )
    {
    	size_t found = y.find(subStrs.back()) ;
    	if (found != std::string::npos)
    	{ // we have a non-trivial solution.
    		if (t.length()>maxLngth)
				maxLngth = t.length() ;
    		continue;
    	}
    	found = y.find_first_of(subStrs.back()) ;
    	if (found == std::string::npos)
    	{
    		continue ;
    	} ;
    	auto k = (subStrs.back()).begin() ;
    	for ( ; k != subStrs.back().end() ; k++)
    	{
    		//subStrs.push_front(subStrs.back().erase((subStrs.back()).begin()+k)) ;
    		subStrs.push_front(subStrs.back().erase(k)) ;
			//cout <<subStrs.front() <<endl;
    	} ;
    } ;
    cout <<maxLngth <<endl ;
    //t.~string() ; x.~string() ; y.~string() ;
    //subStrs.~deque() ;
    return 0;
}
