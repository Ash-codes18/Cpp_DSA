#include <iostream>
using namespace std;

int main(){

    cout<<"Denomination available  : "<<endl;
    cout<<"100"<<endl;
    cout<<"50"<<endl;
    cout<<"20"<<endl;
    cout<<"1"<<endl;

    int n;
    cout<<"Enter the amount : ";
    cin>>n;

    int h,f,t,o;
    h=100;
    f=50;
    t=20;
    o=1;

    int hn,fn,tn,on;
    hn=fn=tn=on=0;

    while(n>0){
        if(n>100){
            hn=n/100;
            n=n%100;
        }
        else if(n>50){
            fn=n/50;
            n=n%50;
        }
        else if(n>20){
            tn=n/20;
            n=n%20;
        }
        else if(n>1){
            on=n/1;
            n=n%1;
        }
    }

    cout<<"For the amount :  "<<n<<endl<<" The following are notes are provided :"<<endl;

    cout<<"100 : "<<hn<<endl;
    cout<<"50 : "<<fn<<endl;
    cout<<"20 : "<<tn<<endl;
    cout<<"1 : "<<on<<endl;

    return 0;
}