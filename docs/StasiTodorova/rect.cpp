#include<iostream>
#include<cmath>
using namespace std;
int n, br, minn=100000000;
int main(){
cin>>n;
for(int i=1;i<=sqrt(n);i++)
{
    if(n%i==0)
    {
        br++;
        if(2*(n/i)+2*i<minn)
            minn=2*(n/i)+2*i;
    }
}
cout<<br<<" "<<minn<<endl;

return 0;
}
