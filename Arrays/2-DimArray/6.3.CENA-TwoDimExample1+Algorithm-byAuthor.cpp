#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[32][32],n,m,pr[32];
int countPoint(int i, int p)
{
    int l,r,mid;
    sort (a[i],a[i]+n);
    if(p<a[i][0]||p>a[i][n-1])return -500;
    l=0;r=n-1;
    while(l<=r)
    {
      mid=(l+r)/2;
      if(p==a[i][mid]) return p;
      if(p>a[i][mid])l=mid+1;
      else r=mid-1;
    }
    if (abs(p-a[i][l])>abs(p-a[i][r]))return a[i][r];
    if (abs(p-a[i][l])<abs(p-a[i][r]))return a[i][l];
    return max(a[i][l],a[i][r]);
}
int main()
{
    int sum=0, i,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        cin>>pr[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        sum+=countPoint(i,pr[i]);
    }
    cout<<sum<<endl;
return 0;
}
