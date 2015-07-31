#include <iostream>
#include <locale>
#include <string>
using namespace std;

main ()
{
	//cout <<localeconv()<<endl;
    setlocale(LC_ALL, "en_US.UTF-8");
    string s;
    cout 	<<"Въведи кирилица:\t";
    cin		>>s;
    cout	<<s;
}
