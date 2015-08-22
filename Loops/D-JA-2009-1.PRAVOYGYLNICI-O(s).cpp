#include <iostream>
using namespace std;
int main()
{ int i,s,j,p,br=0;
  cin>>s;
  p=2*s+2;   // Това е периметъра на правоъгълника с дължина s и ширина 1
  for(i=1;i<=(s+1)/2;i++)
    if (((s%i)==0) && (i<=(s/i)))
      {
       br++;
       j=s/i;
       if ((2*i+2*j)<p)
       p=2*i+2*j;
      }
  cout << br <<" "<< p <<endl;
  
  return 0;
}
