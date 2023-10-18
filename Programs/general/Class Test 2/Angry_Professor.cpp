#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int a,b;

    while(t--){
        cin>>a>>b;
        int x;
        int count=0;
        
        for(int j=0 ;j<a;j++){
            cin>>x;
            if(x>0){
                count++;
                // cout<<count<<endl;
            }
        }

        if(count>=b){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        count=0;

    }

    return 0;
}