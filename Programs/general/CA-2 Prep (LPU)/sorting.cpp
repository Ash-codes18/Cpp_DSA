#include <iostream>
using namespace std;

void input(int arr[],int n){

    // cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

}

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}


void selection(int arr[],int n){
      
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
    swap(arr[i],arr[min]);

    }

}


void insertion(int arr[],int n){
      
   for(int i=1;i<n;i++){

    int j=i-1;
    int temp=arr[i];

    while(j>=0){

        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
j--;
    }
arr[j+1]=temp;
   }

}



void output(int arr[],int n){

    // cout<<"The sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){

    int n;
    // cout<<"Enter the no. of elements in the array : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    selection(arr,n);
    output(arr,n);

    return 0;
}
