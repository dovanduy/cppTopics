#include <iostream>
#include <string.h>

using namespace std;
int t[10],c[10],i,j,k;
char s[41];
int main()
{
 cin>>s;
 int n=strlen(s);
 for(i=0;i<=9;i++) {c[i]=i;t[i]=0;}
 for(i=0;i<n;i++) {j=s[i]-'0';t[j]+=j+1;}
 for(j=0;j<9;j++)
    for(i=j+1;i<=9; i++)
       if((t[i]<t[j])||(t[i]==t[j] && c[i]>c[j]))
         { swap(t[i],t[j]); swap(c[i],c[j]); }
k=0;
while(t[k]==0) k++;
if(c[k]==0) k++;
for(i=k;i<=9;i++)
  for(j=0;j<t[i]/(c[i]+1);j++)
         cout<<c[i];
 cout<<endl;
 return 0;
}

