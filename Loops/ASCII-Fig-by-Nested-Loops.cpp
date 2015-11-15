/*
	Problem Statement
Your teacher has given you the task of drawing
a staircase structure. Being an expert programmer,
you decided to make a program to draw it for you instead. Given the required height, can you print a staircase as shown in the example?
	Input 
You are given an integer N depicting the height of the staircase.
	Output 
Print a staircase of height N that consists
of # symbols and spaces.
For example for N=6, here's a staircase of that height:
     #
    ##
   ###
  ####
 #####
######
Note: The last line has 0 spaces before it.
*/
#include <iostream>
using namespace std;

const char ch='#' ;
const char space = ' ' ;
int main() {
    int n, k ;
    cin >>n ;
    for (int i=n-1; i>=0; i--)
    {
    	for (k=0; k<i; k++)
    		cout <<space;
    	for ( ; k<n; k++)
    		cout <<ch;
    	cout <<endl;
    }
    return 0;
}
// https://www.hackerrank.com/challenges/staircase
