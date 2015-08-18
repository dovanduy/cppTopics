#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
vector<int> g,b;
int n,m,k;
int cmp(int a,int b)
{
    return (a>=b);
}
void read()
{
    char c;
    int res,i;
    cin>>n>>m>>k;
    for(i=1;i<=n+m;i++)
    {
        cin>>res>>c;
        if(c=='G')
            g.push_back(res);
        else
            b.push_back(res);
    }
}
int main()
{
    int minScoreG,minScoreB,szG,szB,x;
    read();
    sort(g.begin(),g.end(),cmp);
    sort(b.begin(),b.end(),cmp);
    szG=g.size();
    szB=b.size();
    //cout<<szB<<' '<<szG<<endl;
    if(szG>=k)
    {
        minScoreG=g[k-1];
        if(szB>=k)
        {
            minScoreB=b[k-1];
        }
        else
        {
            x=k-szB;
            minScoreB=b[szB-1];
            if(szG>=k+x-1)
            minScoreG=g[k+x-1];
            else
                minScoreG=g[szG-1];
        }
    }
    else
    {
        x=k-szG;
         if(szB>=k+x-1)
            minScoreB=g[k+x-1];
            else
                minScoreB=g[szB-1];
        minScoreG=g[szG-1];
    }
    cout<<minScoreB<<' '<<minScoreG<<endl;
return 0;
}
