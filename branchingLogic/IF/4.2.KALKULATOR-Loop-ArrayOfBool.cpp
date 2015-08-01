#include <iostream>
using namespace std;
main()
{
      short x, y, z, n, res=0, lastDigit;
      bool isDigit[10];
      for (int i=0; i<10; i++)
          isDigit[i]=false;
      cin >>x>>y>>z;
      cin >>n;
      do
      {
          lastDigit = n%10;
          if (lastDigit != x &&
              lastDigit != y &&
              lastDigit != z &&
              (! isDigit[lastDigit]))
             {
               res++;
               isDigit[lastDigit]=true;
             };
          n=n/10;
      }
      while (n!=0);
      cout <<res;
}
