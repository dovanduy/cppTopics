/* Въвежда се естествено число.
Отпечатайте ДВОИЧНИЯ запис на числото. 
Решението да е със СТЕК.
ВХОД	ИЗХОД
26		11010
2		10
5		101	 
*/
#include <iostream>
#include <stack> // STL STACK functionality
using namespace std;
main ()
{
	int num;
	stack<int> binDig;
	cin >>num;
	do	
	{	// move to stack
		// a binanary digit
		binDig.push(num%2) ;
		num=num/2; // remove
		// a right binary digit
	} while (num != 0) ;
		
	while (! binDig.empty())
	{
		// to print a last remainder
		cout <<binDig.top();
		binDig.pop(); // to remove and
		// to be ready for a next remainder
	}
}
