#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() 
{ 
    srand((unsigned)time(0)); 
    int a, b;
    /*
    if ((rand()%2))
		cout <<true;
	else
		cout <<false;
	*/
	cin >>a >>b;
	if ((rand()%2))
		cout <<(a+b);
	else
		cout <<(a-b);
}
