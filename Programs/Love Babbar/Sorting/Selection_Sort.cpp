#include <iostream>
using namespace std;


void input(int arr[],int n){

    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

}

void sort(int arr[],int n){

      for(int i=0;i<n;i++){
   int min_index=i;
       for(int j=i+1;j<n;j++){
           if(arr[min_index]>arr[j]){
               min_index=j;
           }
       }
       swap(arr[min_index],arr[i]);
   } 

}



void output(int arr[],int n){

    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){

    int n;
    cout<<"Enter the no. of elements in the array : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    sort(arr,n);
    output(arr,n);

    return 0;
}