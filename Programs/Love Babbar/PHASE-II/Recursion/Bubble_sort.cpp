#include <iostream>
using namespace std;


// void bsort(int arr[],int n){
//     for(int i=1;i<n;i++){

//         bool swapped=0;

//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=1;
//             }
//         }

//     if(!swapped){
//         break;
//     }

//     }
// }


void bsort(int arr[], int n){

    if(n==0 ||n==1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bsort(arr,n-1);

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

    bsort(arr,n);

    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}