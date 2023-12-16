#include <iostream>
using namespace std;

void power(int a, int b){

    int ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }
    cout <<"The value of "<<a<<" to the power "<<b<<" is : "<< ans << endl;

}


int main(){

while(1){

int i;
cout<<"Options : "<<endl<<"1. Calculate Power"<<endl<<"2. Exit"<<endl<<"Enter your choice : ";
cin>>i;

    if(i==1){
    int a,b;
    cout<<"Enter the number : ";
    cin >>a;
    cout<<"Enter the power : ";
    cin >>b;
    power(a,b);
    }
    else if (i==2){
        break;
    }

    else{
        cout<<"Please enter a valid option."<<endl;
    }
}
    return 0;
}