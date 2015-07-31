#include <iostream>

using namespace std;

int main()

{

int n,j=0,c,s=100,p=100;
cin >> n;

    for(j;j<n;j++)
    {
    cin >> c;
    s=s+c;
    if(s<p)
    p=s;
    }
    cout << p;
}
