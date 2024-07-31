#include <iostream>
using namespace std;

bool issorted(int arr[], int n){


    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    else{
       return issorted(arr+1,n-1);
    }


}

int main(){

    int arr[10];

    cout<<"Enter 10 numbers : "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    issorted(arr,10)?cout<<"The array is sorted.":cout<<"The array is not sorted.";

    return 0;
}