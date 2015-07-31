#include <iostream>
using namespace std;
main()
{
      int i, n, jump;
      double sum=100, min;
      min=sum;
      cin >>n;
      for (i=0; i<n; i++)
      {
          cin>>jump;
          sum+=jump;
          if (sum<min)
             min=sum;
      } ;
         cout <<min;
}
