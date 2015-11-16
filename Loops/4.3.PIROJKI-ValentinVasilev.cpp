#include <iostream>
using namespace std;
int main(){
    int n,a,a1,b,b1,c=0,broi=0,i=0;
    cin>>n>>a>>b;
    a1=a;
    b1=b;
    if(a+b<n){
        cout<<"0";
    }
    else{
    if(a>b){
        for(i=0;i<n+1;i++){
            if(b<c+1){
                break;
            }
            broi++;
            c=n-a1;
            a1=a1-1;
            b1=c+1;
        }
    }
    if(b>a){
         for(i=0;i<n+1;i++){
            if(a<c+1){
                break;
            }
            broi++;
            c=n-b1;
            b1=b1-1;
            a1=c+1;
        }
    }
    cout<<broi;
    }
    return 0;
}
