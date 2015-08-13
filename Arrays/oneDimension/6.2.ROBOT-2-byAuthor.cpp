#include<iostream>
using namespace std;
int main()
{
    long long int n,k,m1,m2,m3;
    long long int a[100];
    cin>>n>>k;
    int i;
    for(i=0;i<n;i++)cin>>a[i];
    cin>>m1>>m2>>m3;
    if(m1>m2)swap(m1,m2);
    if(m1>m3)swap(m1,m3);
    if(m2>m3)swap(m2,m3);
    int s1=0,s2=0,s3=0,s4=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==m1)s1=a[i];
        if(a[i]==m2-m1)s2=a[i];
        if(a[i]==m3-m2)s3=a[i];
        if(a[i]==k-m3)s4=a[i];
    }
    if(s1==0 || s2==0 || s3==0 || s4==0) cout<<"NO"<<endl;
    else cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;

}
