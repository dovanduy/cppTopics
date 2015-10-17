#include<iostream>
#include<string>
using namespace std;

struct words{int num; string word;};

string find(words*a, int n, int x)
{
    int i=0;
    while(a[i].num!=x)i++;
    return a[i].word;
}

int main()
{words a[2000];
int n,m,k,i;
cin>>n>>m;
for(i=0;i<n;i++)
    cin>>a[i].num>>a[i].word;
for(i=0;i<m;i++)
{
    cin>>k;
    cout<<find(a,n,k)<<" ";
}
cout<<endl;

return 0;
}
