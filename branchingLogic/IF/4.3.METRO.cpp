#include <iostream>

using namespace std;

int main()
{

int n,k,l,p;
cin >> n >> k >> l;

    if(k>l)
    p=k-l;

    else
    p=l-k;

    if(p>n/2)
    {
        cout << n-p-1;
    }
    else
    {
        cout << p-1;
    }



}
