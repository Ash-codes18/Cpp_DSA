#include <iostream>
using namespace std;


void merge(int arr[], int s, int e  ){

//printing the entire array passed
    cout<<"main : ";
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }


    int mid=(s+e)/2;
    int left=s;
    int right=mid+1;


//Printing left and right sub arrays

    cout<<endl<<"left : ";
    for(int i=left;i<=mid;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"right : ";
    for(int i=right;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    
    while(left<=mid && right<=e){
        if(arr[left]<arr[right]){
            left++;
        }
        else {
            int temp=arr[right];

            for(int i=right;i>left;i--) {
                arr[i]=arr[i-1];
            }

            arr[left]=temp;

            left++;
            mid++;
            right++;
        }
    }   


//printing the sorted array after merging the subarrays
    cout<<"After Merge : ";
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}



void msort(int arr[], int start, int end){
    
    if(start>=end){
        return;
    }

    int mid = (start+end)/2;


    //sorting left part of the divided array
    msort(arr,start,mid);

    //Sorting right part of the divided array
    msort(arr,mid+1,end);


    //Merging the fragmented arrays after all of them have been sorted 
    cout<<endl<<endl<<"Calling merge "<<endl<<endl;
    merge(arr,start,end);
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