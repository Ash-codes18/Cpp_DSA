// We can also directly use the in built max and min functions 


#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}


void max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;
}


void min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum element is : "<<min<<endl;
}



int main(){

    int arr[10];
    input(arr,10);
    max(arr,10);
    min(arr,10);

    return 0;
}