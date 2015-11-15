/*	You're given an array of integers.
Can you find what fraction of the elements are
positive numbers, negative numbers and zeroes?
Print the value of the fractions
in decimal form with 3 decimal places.
	Input Format:
The first line contains N: the size of the array. 
The next line contains N space-separated integers.
	Output Format:
Output the three values each on a different line.
The first value shows the fraction
of the count of positive numbers to the total numbers,
the second shows the fraction of negative numbers,
and the third represents the fraction of zeroes.
Correct the fraction to 3 decimal places.
	Sample Input:
6
-4 3 -9 0 4 1         
	Sample Output:
0.500
0.333
0.167
*/
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    long long int countP=0, countN=0, countZ=0, n, num, t;
    cin >>n ;
    for (t=n ; t>0; t--)
    {
        cin >>num;
        if (num>0) countP++;
        else if (num<0) countN++;
        else countZ++ ;
    } ;
    printf("%.3f\n", countP*1./n);
    printf("%.3f\n", countN*1./n);
    printf("%.3f\n", countZ*1./n);
    return 0;
}
// https://www.hackerrank.com/challenges/plus-minus
