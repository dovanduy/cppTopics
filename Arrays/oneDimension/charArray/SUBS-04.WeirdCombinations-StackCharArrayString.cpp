// SUBS-04.WeirdCombinations.cpp
// https://judge.softuni.bg/Contests/37/CSharp-Basics-Exam-7-November-2014
#include <iostream>
// https://bg.wikipedia.org/wiki/%D0%A1%D1%82%D0%B5%D0%BA_(%D1%81%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80%D0%B0_%D0%BE%D1%82_%D0%B4%D0%B0%D0%BD%D0%BD%D0%B8)
// https://www.youtube.com/watch?v=5UjENioK8tw
#include <stack>
#include <string> // Koala Press - SIMVOLNI NIZOVE - p 123.
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

