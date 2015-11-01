#include<iostream>
#include<cmath>
using namespace std;
int main(){
int black=0, white=0;
string str;
int n;
cin>>n;
cin>>str;

for(int i=0;i<str.size();i++)
{
    //cout<<"onr more\n";
    int a=str[i];
    if((str[i]>='a' && str[i]<='z') ||
       (str[i]>='0' && str[i]<='9'))
    {
        if(i%2==0){
            black+=a;
           // cout<<"b "<<a<<endl;
        }
        else
        {
            white+=a;
           // cout<<"w "<<a<<endl;
        }
    }
    if(str[i]>='A' && str[i]<='Z')
    {
        if(i%2==0){
            white+=a;
          //  cout<<"w "<<a<<endl;
        }
        else
        {
           black+=a;
        //   cout<<"b "<<a<<endl;
        }
    }
}
if(white==black)
    cout<<"Equal result: "<<white<<endl;
else
{
    cout<<"The winner is: ";
    if(black>white)
        cout<<"black team\n";
    else
        cout<<"white team\n";
    cout<<abs(white-black);
}

return 0;
}
