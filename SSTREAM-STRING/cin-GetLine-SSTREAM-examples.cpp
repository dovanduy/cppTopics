// cin with strings
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main ()
{
  string mystr;
  cout << "1. What's your name? ";
  getline (cin, mystr); // read from cin till <Enter>
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr); // read into mystr
  cout << "I like " << mystr << " too!\n";
  int a=5;
  cin >>a; // int
  cout <<"a="<<a<<endl ;
  cin >>mystr; // // read from cin till 1st seaparator (space, tab || <Enter>)
  cout << "I like " << mystr << " too!\n";
  cout << "2. What's your name? ";
/*
  char c;
  mystr = "";
  while ((c=cin.get()) != '\n')
  	mystr+=c;
  cout << "Hi " << mystr << ".\n";
*/

string mystr2 ("3.1415"); // extract formatted input
// http://www.cplusplus.com/doc/tutorial/basic_io/
double myDouble = 3.1415;
// EXTRACTION from srting to int example
stringstream(mystr2) >> myDouble;
cout <<"\n\tmyDouble=\t" 
// iomanip is an option only about formating
// http://arachnoid.com/cpptutor/student3.html
// http://www.learncpp.com/cpp-tutorial/133-output-with-ostream-and-ios/
<< std::fixed << std::setw( 11 ) << std::setprecision( 2 )  << std::setfill( '0' )
<<myDouble; // From myStr to int or to double conversion

/*
// http://www.cplusplus.com/reference/sstream/stringstream/
mystr2 ="Ha Ha Ha! " ;
myDouble=3.1415 ; // Insert formatted output
// http://www.cplusplus.com/reference/ostream/ostream/operator%3C%3C/
// EXTRACTION from DOUBLE, int to STRING example
cout <<"\n" <<mystr2;
*/
  return 0;
}
