#include <iostream>
using namespace std;


// void ssort(int arr[],int n){
//     int ind;

//     for(int i=0;i<n;i++){
//         ind=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[ind]){
//                 ind=j;
//             }
//         }
//         swap(arr[i],arr[ind]);
//     }
// }


void ssort(int arr[], int n){

    if(n==0 || n==1){
        return;
    }

    int min=0;
    for(int i=1;i<n;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
    }

    swap(arr[min],arr[0]);

    ssort(arr+1,n-1);

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

    ssort(arr,n);

    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}