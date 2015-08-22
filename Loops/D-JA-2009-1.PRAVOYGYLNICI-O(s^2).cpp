#include <iostream>
using namespace std;
int main()
{ long long i,s,j,p,br=0;
  cin>>s;
  p=2*s+2;   // Това е периметъра на правоъгълника с дължина s и ширина 1
  for(i=1;i<=s;i++)
    for(j=i;j<=s;j++)
      if (s==(i*j))
      {             
       br++;
       if ((2*i+2*j)<p)
       p=2*i+2*j;
      }
  cout << br <<" "<< p <<endl;  
  return 0;
}
