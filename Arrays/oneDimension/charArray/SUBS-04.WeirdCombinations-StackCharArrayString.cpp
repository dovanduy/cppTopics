// SUBS-04.WeirdCombinations.cpp
// https://judge.softuni.bg/Contests/37/CSharp-Basics-Exam-7-November-2014
#include <iostream>
#include <stack>
#include <string>
using namespace std;

const int numSysBase = 5 ;

int main ()
{ // numeral system based solution. The author uses nested loops.
	string s ;
	int n,
		qtyDigits ;
	stack<int> digits ;
	char result [numSysBase] ;
	cin >>s >>n;
	
	do	
	{	// moves to stack a last digit
		digits.push(n%numSysBase) ;
		n = n/numSysBase ; // remove last digit
	} while (n != 0) ;
	
	qtyDigits = digits.size() ; 
	if (qtyDigits > numSysBase)
	{
		cout <<"No" ;
		return 0 ;
	} ;
	
	for (int k=0; k<numSysBase-qtyDigits; k++)
		cout <<s[0] ; // prints leading zeros if they are available
		
	while (! digits.empty())
	{ // to print a last remainder
		cout <<s[digits.top()];
		digits.pop(); // to remove and to be ready for a next remainder
	}
}

