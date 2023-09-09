#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x;

    for(int i=0;i<n;i++){
        cin>>x;

        if(x<38){
            cout<<x<<endl;
        }

        else{
            int i=1;
            int mul=1;
            while(x>=mul){
                mul=i*5;
                i++;
            }
          
            if(mul-x<3){
                cout<<mul<<endl;
            }
            else{
                cout<<x<<endl;
            }

        }

    }

    return 0;
}