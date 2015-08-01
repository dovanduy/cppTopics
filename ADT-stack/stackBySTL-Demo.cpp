// HOW TO USE A STACK? 
// Main live STACK EXAMPLE.
// Video lesson: https://www.youtube.com/watch?v=5UjENioK8tw
#include <iostream>
#include <stack> // STL STACK functionality
using namespace std;
main ()
{	// My stack application.
	// 1st, To declare myStack.
	stack<char> stackOfChars;
	// 2nd, To add letters of word "INTERNET"
	// as elements of my stack of characters. 
	stackOfChars.push('I');
	stackOfChars.push('N');
	stackOfChars.push('T');
	stackOfChars.push('E');
	stackOfChars.push('R');
	stackOfChars.push('N');
	stackOfChars.push('E');
	stackOfChars.push('T');
	
	cout <<"\nOn the TOP of Stack is: "
	// 3rd. How to read from stack?
	<<stackOfChars.top() <<endl <<endl ;
	
	stackOfChars.pop(); // To delete an element
	
	cout 
	<<"After pop() the NEW TOP element is: "
	<<stackOfChars.top() <<endl <<endl
	<<"The REMAINING STACK elements are:\n"
	<<endl;
	
	// 4th. deletes already printed top element
	stackOfChars.pop();	
	
	while ( ! stackOfChars.empty())
	{	// The loop prints 
		// remaining STACK elements now.
		cout <<stackOfChars.top() <<endl;
		// The loop prints TOP element
		stackOfChars.pop(); // DELetes TOP element.
	}
}
/* 
ADT Stack - LIFO, Last In First Out
Operation	Description
	push()	adds a new element at stack top
	pop()	deletes a top element
	top()	returns top stack element
	empty()	checks the stack
	size()	returns stack qty
*/
