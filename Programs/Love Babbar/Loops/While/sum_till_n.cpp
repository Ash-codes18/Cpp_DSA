#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i=1;
    int sum=0;

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }

    cout<<"The sum of the first n natural nos. is : "<<sum;

    return 0;
}