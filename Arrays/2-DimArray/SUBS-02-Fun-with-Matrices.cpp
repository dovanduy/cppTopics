// SUBS-02.Fun-with-Matrices.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
// https://judge.softuni.bg/Contests/77/Programming-Basics-March-Lab
int main()
{
	// long 
	double step,	// input
		matrix [4][4],
		sumLeft, sumRight, sumCol[4], sumRow[4], max ; // results
	int row, col, seqNum;
	char ch;
	string s ; // command
	
	for (seqNum=0; seqNum<4; sumCol[seqNum]=sumRow[seqNum]=0, seqNum++) ;
	cin >>matrix[0][0] >>step	;
	for (seqNum=1; seqNum<16; seqNum++)
	  matrix[seqNum/4][seqNum%4] = step + matrix[(seqNum-1)/4][(seqNum-1)%4] ;

	for (cin >>s; s != "Game"; cin >>s)
	{ //	command processing
		row = s[0] - '0';
		cin >>col >>s >>step;
		if (s == "multiply")
			matrix[row][col] *= step ;
		else if (s == "sum")
			matrix[row][col] += step ;
		else if (s == "power")
			matrix[row][col] = pow(matrix[row][col], step) ;
		else
			cerr <<'?' ;
	} ;

	for (sumRight=sumLeft=row=0; row<4; row++)
	{	// sum calc
		for (col=0; col<4; sumCol[col] += matrix[row][col], col++)
		{
			sumRow[row] += matrix[row][col] ;
			if (row == col)
	    		sumLeft += matrix[row][col] ;
	    	else
	    	  if (3 == row+col)
	    	  	sumRight += matrix[row][col] ;
		}
	}

	for (max = (sumRight < sumLeft) ? sumLeft : sumRight, seqNum=0; seqNum<4; seqNum++)
	{	// to find a max
		if (max<sumRow[seqNum])
		  	max = sumRow[seqNum] ;
		if (max<sumCol[seqNum])
	  		max = sumCol[seqNum] ;
	} ;
	// to print a RESULT now
	cout <<fixed <<setprecision(2) ;
	for (seqNum=0 ; seqNum<4; seqNum++)
	if (sumRow[seqNum] == max)
	{
		cout <<"ROW[" <<seqNum <<"] = " <<sumRow[seqNum] ;
		return 0;
	} ;
	for (seqNum=0; seqNum<4; seqNum++)
	if (sumCol[seqNum] == max)
	{
		cout <<"COLUMN[" <<seqNum <<"] = " <<sumRow[seqNum] ;
		return 0;
	} ;
	if (max == sumLeft)
		cout <<"LEFT-DIAGONAL = " <<sumLeft ;
	else
		cout <<"RIGHT-DIAGONAL = " <<sumRight ;
	return 0 ;
/*
	cout <<endl<<"==="<<endl ;
	for (row=0; row<4; row++)
	{
		for (col=0; col<4; col++)
		{
			cout <<'\t' <<matrix[row][col] ;
		};
		cout <<'\t' <<sumRow[row] <<endl ;
	 } ;
	 cout <<sumRight;
	 for (seqNum=0 ; seqNum<4; seqNum++)
	 	cout <<'\t' <<sumCol[seqNum] ;
	cout <<'\t' <<sumLeft ;
*/
}
