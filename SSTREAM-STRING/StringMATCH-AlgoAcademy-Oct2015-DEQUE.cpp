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
	long maxLngth=0;
 	cin >>x >>y;
    int xl = x.length() ;
    int yl = y.length() ;
 	if (xl>yl)
 	{ // The string x wil be shorter than y.
 		t=x;
 		x=y;
 		y=t;
 	} ; // The string x can be into a string y.
 	subStrs.push_front(x) ;
 	for ( ; !subStrs.empty() ; )
    {
    	t=subStrs.back() ;
    	size_t found = y.find_first_of(t) ;
    	if (found == std::string::npos)
    	{
    		// toDo del deque.back
    		continue ;
    	}
    }
    return 0;
}
