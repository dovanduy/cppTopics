#include<iostream>
using namespace std;
int main()
{int b, c, d, k, b1, c1, d1, k1, a1, a2, a3, max=-1;
 cin>>b>>c>>d>>k;
 if(k==3)
   {a1=b%10; a2=c%10; a3=d%10;}
 if(k==2)
   {a1=(b/10)%10;a2=(c/10)%10;a3=(d/10)%10;}
 if(k==1)
   {a1=b/100; a2=c/100; a3=d/100;}
 if((9+(a1-5))>8) max=a1;
 if((9+(a2-5))>8 && a2>max) max=a2;
 if((9+(a3-5))>8 && a3>max) max=a3;
 if(max==-1) cout<<"No"<<endl;
   else cout<<max<<endl;
 return 0;
}
