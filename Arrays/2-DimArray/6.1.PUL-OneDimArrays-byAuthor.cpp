#include<iostream>
using namespace std;

int x[200],y[200],s[200];

int center(int k, int a,int b)
{
    int i=0;
    while (i<k && (x[i]!=a || y[i]!=b))i++;
    return i;
}

int popad(int k, int a,int b)
{
    int q[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    int t=0;
    int i=center(k,a,b);
    if(i<k && s[i]!=0){t+=100;s[i]=0;}
    for(int j=0;j<4;j++)
    {
        i=center(k,a+q[j][0],b+q[j][1]);
        if(i<k && s[i]!=0)
    {
        t+=10;
        if(s[i]==1)s[i]=-1;else s[i]=0;
    }

    }
    return t;
}

int main()
{
    int n,k,m,sum=0,i;
    cin>>n>>k>>m;
    for(i=0;i<k;i++)
    {
        cin>>x[i]>>y[i];
        s[i]=1;
    }
    int a,b;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        sum+=popad(k,a,b);
    }
    cout<<sum<<endl;

return 0;
}
