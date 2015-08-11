#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int sl=n*250;
    int kola=m*3*1000+m*785;
    if (sl<=kola)cout<<"YES\n";
    else {
            int l=(sl-kola)/1000;
            int ml=(sl-kola)%1000;
            cout<<l<<" "<<ml<<endl;
        }
    return 0;
}
