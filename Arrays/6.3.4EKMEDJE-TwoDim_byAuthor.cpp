#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int a[100][100];
    cin>>n;
    int i,j,br,maxc;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)cin>>a[i][j];
    br=0;
    maxc=0;
    for(j=0;j<n;j++)
    {
        i=0;
        while(i<n && a[i][j]%2>0)i++;
        if(i<n)br++;
        if(a[j][j]>maxc)maxc=a[j][j];
    }
    if(br==0 || maxc>n)cout<<n<<" "<<n<<endl;
    else cout<<br<<" "<<maxc<<endl;
}
