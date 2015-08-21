#include <iostream>
#include <string>

using namespace std;
int main()
{string s;
 int i,n,p=0;
 cin>>s;
 n=s.length();
 for (i=0;i<n;i++) // how many  '1'?
     if (s[i]=='1') p++; // p is counter
 for (i=0;i<p;i++) cout<<'1';
 for (i=p;i<n;i++) cout<<'0';
 cout<<endl;
 return 0;
} 
 
