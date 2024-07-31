// Just change the comparision sign in line 30 rest is same

#include <iostream>
using namespace std;


void merge(int arr[], int s, int e){

    int mid=(s+e)/2;

    int lsize=mid+1-s;
    int rsize=e-mid;
    int main=s;

    int *left = new int[lsize];
    int *right = new int[rsize];

    for(int i=0;i<lsize;i++){
        left[i]=arr[main++];
    }
    for(int i=0;i<rsize;i++){
        right[i]=arr[main++];
    }

    int lind=0;
    int rind=0;
    main=s;

    while(lind<lsize && rind<rsize){
        if(left[lind]>right[rind]){  //only 1 change here
            arr[main++]=left[lind++];
        }
        else{
            arr[main++]=right[rind++];
        }
    }

    while(lind<lsize){
        arr[main++]=left[lind++];
    }
    while(rind<rsize){
        arr[main++]=right[rind++];
    }

    delete []left;
    delete []right;


}


void msort(int arr[], int s, int e){

    if(s>=e){
        return;
    }

    int mid=(s+e)/2;

    msort(arr,s,mid);
    msort(arr,mid+1,e);

    merge(arr,s,e);

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

    msort(arr,0,n-1);

    cout<<endl<<endl;
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}