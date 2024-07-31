#include <iostream>
using namespace std;

int getsum(int *arr, int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    int *arr = new int[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=getsum(arr,n);
    cout<<"SUm of the array is : "<<sum<<endl;


    return 0;
}