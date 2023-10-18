#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    long long int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    sort(arr,arr+5);
    
    long long min=arr[0]+arr[1]+arr[2]+arr[3];
    long long max=arr[1]+arr[2]+arr[3]+arr[4];


    cout<<min<<" "<<max;

    return 0;
}