#include <iostream>
using namespace std;

int main()
{
    int a,b,p;
    int n,i;
    int ct,d;
    
    bool meters[400];
    
    cin >> a >> b >> p;
    n=2*a+2*b;
    for (i=0;i<n;i++)
      meters[i]=false;
    meters[0]=true; ct=1; d=0;
    i=p;
    while (!meters[i])
    {
      meters[i]=true;
      ct++;
      if (i<(a+b))
        d=d+2*i;
      else
        d=d+2*((2*a+2*b)-i);
      i=i+p;
      if (i>=(2*a+2*b))
        i=i-(2*a+2*b);    
    }
          
    cout << ct << " " << d << endl;
    
      
    return 0;
}
