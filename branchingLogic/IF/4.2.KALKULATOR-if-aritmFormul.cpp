#include <iostream>

using namespace std;

int main()

{

int n,x,y,z,c,c1,c2,c3,c4,l=0;
cin >> x >> y >> z >> c;

    c1=c%10;
    c2=(c/10)%10;
    c3=(c/100)%10;
    c4=c/1000;

        if(c1==x || c1==y || c1==z)
        {

        }
        else
        l++;

        if(c2==x || c2==y || c2==z || c1==c2)
        {

        }
        else
        l++;

        if(c3==x || c3==y || c3==z || c3==c1 || c3==c2)
        {

        }
        else
        l++;

        if(c4==x || c4==y || c4==z || c4==c3 || c4==c2 || c4==c1)
        {

        }
        else
        l++;

        cout << l;





}
