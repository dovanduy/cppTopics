// https://www.hackerrank.com/challenges/plus-minus
#include <iostream>
#include <iomanip>
using namespace std;

int n;
int main() {
    int a(0),b(0),c(0); // C++11
    cin >> n;
    for(int i=0;i<n;i++) 
	{ int x; cin >> x; 
	  if(x > 0) a++; 
	  if(x < 0) b++;
	  if(x == 0) c++; }
    cout << setiosflags(ios::fixed) << setprecision(3) 
	<< a/(n * 1.0) << "\n" 
	<< b/(n * 1.0) << "\n" << c / (n*1.0) << endl;   
    return 0;
}
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
