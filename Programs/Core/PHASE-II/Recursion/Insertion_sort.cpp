#include <iostream>
using namespace std;


// void isort(int arr[],int n){

//     int temp;

//     for(int i=1;i<n;i++){
//         temp=arr[i];
//         int j=i-1;
//         while(j>=0){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             j--;
//         }
//         arr[j+1]=temp;
//     }

// }


void isort(int arr[], int n){

    if(n<=1){
        return ;
    }

    
isort(arr,n-1);

    int last = arr[n-1];
    int j = n-2;

    while (j >= 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;


}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<"Before Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    isort(arr,n);

    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}