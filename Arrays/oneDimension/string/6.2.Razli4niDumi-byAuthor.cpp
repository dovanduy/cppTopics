#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> raz,dub;
int n;
int main()
{
    string w;
    int i,m=0,k,j,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>w;
        l=0;
        k=dub.size();
        for(j=0;j<k;j++)
        {
            if(dub[j]==w)
            {
                l=1;break;
            }
        }
        if(!l)
        {
            m=raz.size();
             for(j=0;j<m;j++)
                {
                    if(raz[j]==w)
                    {
                        raz.erase(raz.begin()+j);
                        l=1; m--;
                        dub.push_back(w);
                        break;
                    }
                }
        }

        if(!l)
        {
            raz.push_back(w);
        }
    }
    m=raz.size();
    cout<<m<<endl;
    for(i=0;i<m;i++)
    {
        cout<<raz[i]<<endl;
    }


return 0;
}
