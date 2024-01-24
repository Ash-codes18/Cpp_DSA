#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot=arr[s];

//Numbers that are smaller than pivot
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

//place pivot at the right position
    int pivotind=s+count;
    swap(arr[pivotind],arr[s]);




//make left and right proper (left elements less than pivot and right elements>pivot)
    int i=s, j=e;

    while(i<pivotind && j>pivotind){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotind && j>pivotind){
            swap(arr[i++],arr[j--]);
        }

    }

    return pivotind;

}



void quicksort(int arr[], int s, int e){

    if(s>=e){
        return;
    }

//partition
    int p = partition(arr,s,e);

//left part sort
    quicksort(arr,s,p-1);

//left part sort
    quicksort(arr,p+1,e);

}



int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl<<"Before Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    quicksort(arr,0,n-1);


    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}
