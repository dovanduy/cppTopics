#include<iostream>
#include<algorithm>
using namespace std;
struct period
{
    int m_bh,m_bm,m_eh,m_em,m_e,m_b;
    void read()
    {
        cin>>m_bh>>m_bm>>m_eh>>m_em;
        m_e=m_eh*60+m_em;
        m_b=m_bh*60+m_bm;
    }
    void print()
    {
        cout<<m_bh<<' '<<m_bm<<' '<<m_eh<<' '<<m_em<<endl;
    }
};
int cmp(period p1,period p2)
{
    if(p1.m_b<p2.m_b)return 1;
    if(p1.m_b>p2.m_b)return 0;
    if(p1.m_e<p2.m_e)return 1;
    return 0;
}
int n,k;
period a[512], b[512];
void read_times()
{
    int i;
    cin>>n;
    for(i=0;i<n;i++)
        a[i].read();
}
void solve()
{

    int i,j;
    period tfree,t;
    sort(a,a+n,cmp);
     t=a[0];
    if(t.m_b>0)
    {
        tfree.m_b=0;
        tfree.m_bh=0;
        tfree.m_bm=0;
        tfree.m_e=t.m_b;
        tfree.m_eh=t.m_bh;
        tfree.m_em=t.m_bm;
        b[k++]=tfree;
    }
    for(i=1;i<n;i++)
    {
        if(t.m_e>=a[i].m_b)
        {
            if(a[i].m_e>t.m_e)
            {
                 t.m_e=a[i].m_e;
                 t.m_eh=a[i].m_eh;
                 t.m_em=a[i].m_em;
            }


        }
        else
        {
            tfree.m_b=t.m_e;
            tfree.m_bh=t.m_eh;
            tfree.m_bm=t.m_em;
            tfree.m_e=a[i].m_b;
            tfree.m_eh=a[i].m_bh;
            tfree.m_em=a[i].m_bm;
            b[k++]=tfree;
            t=a[i];

        }

    }

    if(t.m_e<(24*60))
    {
            tfree.m_b=t.m_e;
            tfree.m_bh=t.m_eh;
            tfree.m_bm=t.m_em;
            tfree.m_e=24*60;
            tfree.m_eh=24;
            tfree.m_em=0;
            b[k++]=tfree;
    }
    cout<<k<<endl;
    for(i=0;i<k;i++)
    {
        b[i].print();
    }
}
int main()
{
    read_times();
    solve();
    return 0;
}
