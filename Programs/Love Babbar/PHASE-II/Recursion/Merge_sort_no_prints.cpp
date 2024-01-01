#include <iostream>
using namespace std;

    void merge(int arr[], int s, int e  ){


        int mid=(s+e)/2;

        int ind1=mid-s+1;
        int ind2=e-mid;
        int main=s;

        int *left = new int[ind1];
        int *right = new int[ind2];


        for(int i=0;i<ind1;i++){
            left[i]=arr[main++];
        }
        for(int i=0;i<ind2;i++){
            right[i]=arr[main++];
        }


        int leftind=0;
        int rightind=0;
        main=s;


        while(leftind<ind1 && rightind<ind2){
            if(left[leftind]<=right[rightind]){
                arr[main++]=left[leftind++];
            }
            else{
                arr[main++]=right[rightind++];
            }
        }

        while(leftind<ind1){
            arr[main++]=left[leftind++];
        }

        while(rightind<ind2){
            arr[main++]=right[rightind++];
        }


        delete []left;
        delete []right;

    }



    void msort(int arr[], int start, int end){
        
        if(start>=end){
            return;
        }

        int mid = (start+end)/2;

        msort(arr,start,mid);
        msort(arr,mid+1,end);
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