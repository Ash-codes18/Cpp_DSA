#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ele,pos;
    cin>>ele;
    cin>>pos;

    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }

    arr[pos]=ele;
    
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}