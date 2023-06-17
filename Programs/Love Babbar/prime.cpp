#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. you want to check : ";
    cin >> n;

    int flag=1;


    if(n>1){
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0){
            flag=0;
        }
    }
    if (flag)
    {
        cout<<n<<" is prime.";
    }
    else{
        cout<<n<<" is not prime.";
    }
    
    }
    else{
        cout<<n<<" is not prime";
    }
    

    return 0;
}