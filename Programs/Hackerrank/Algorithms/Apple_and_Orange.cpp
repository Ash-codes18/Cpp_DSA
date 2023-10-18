#include <iostream>
using namespace std;

int main(){

    int s,t;
    cin>>s>>t;

    int a,b;
    cin>>a>>b;

    int m,n;
    cin>>m>>n;

    int x,y;
    int ca=0;
    int co=0;

    for(int i=0;i<m;i++){
        cin>>x;
        if(a+x>=s && a+x<=t){
            ca++;
        }
    }
    for(int i=0;i<n;i++){
        cin>>y;
        if(b+y>=s && b+y<=t){
            co++;
        }
    }

    cout<<ca<<endl;
    cout<<co<<endl;

    return 0;
}