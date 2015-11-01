#include<iostream>
using namespace std;
string str;
int br;
int main()
{
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='1')
            br++;
    }
    for(int i=0;i<br;i++)
        cout<<1;
    for(int i=0;i<str.size()-br;i++)
        cout<<0;
    cout<<endl;

    return 0;
}
