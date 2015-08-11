// SUBS-02.ChessBoardGame.cpp
#include <iostream>
#include <string>
using namespace std;

int* board = NULL ; // empty array
long scoreB=0, scoreW=0 ;

void blackMove (int c)
{
	if (c>='A' && c<='Z')
		scoreW+=c ;
	else
		scoreB+=c ;	
}

void whiteMove (int c)
{
	if (c>='A' && c<='Z')
		scoreB+=c ;
	else
		scoreW+=c ;	
}

int eval (char c)
{
	if ((c>='0' && c<='9') ||
		(c>='a' && c<='z') ||
		(c>='A' && c<='Z'))
		return ((int)c) ;
	else
		return 0 ;
}
int main()
{ // https://judge.softuni.bg/Contests/81/Programming-Basics-Exam-26-April-2015-Morning
	int n, 
		k;
	char ch;
	string s ;
	cin >>n;// >>s; It can NOT read more than 1 word in myString s!
	s="";
	cin.get(ch);
	while (cin.get(ch) &&(ch != '\n'))
		s = s + ch;
	board = new int [n*n] ; // to allocate memory now.
	for (k=0; k<n*n; k++)
		board[k] = 0 ;
	
	//for (k=0; k<s.length(); k++)
	// to fill a game field
	//	board[k%(n*n)]=eval(s[k]) ;
	for (k=0; k<s.length() && k<(n*n); k++)
	// It is an unclear condition (variant) of task
	board[k]=eval(s[k]) ;

	for (k=0 ; k<n*n; k++)
		switch (k%2)
		{
			case 0: 	blackMove(board[k]) ; break;
			default :	whiteMove(board[k]) ; break;
		} ;

	if (scoreB == scoreW)
		cout <<"Equal result: " <<scoreB ;
	else if (scoreB > scoreW)
		cout <<"The winner is: black team\n" <<(scoreB-scoreW) ;
	else
		cout <<"The winner is: white team\n" <<(scoreW-scoreB) ;

	if (board != NULL) // if the array is not empty then
	{ 	// to get memory back as a free, re-usable memory.
		delete [] board ; 
		board = NULL ; 
	}
	return 0;
}
