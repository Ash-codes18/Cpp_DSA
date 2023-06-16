#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int sum = 0;

    for(int i=0;i<=n;i++){
        sum=sum+i;
    }

    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;

    return 0;
}