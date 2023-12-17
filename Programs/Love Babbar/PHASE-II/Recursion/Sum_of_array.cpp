#include <iostream>
using namespace std;

int getsum(int arr[], int n){

    if(n==0){
        return 0;
    }


    return arr[0]+getsum(arr+1,n-1);

}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter "<<n<<" numbers : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of the digits = "<<getsum(arr,n);

    return 0;

}