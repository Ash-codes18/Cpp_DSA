#include <iostream>
using namespace std;

int call=1;

int partition(int arr[], int s, int e){

    int pivotind;
    int pivot=arr[s];
    cout<<"Pivot = "<<pivot<<endl;
    int count=0;

    cout<<"Array : "<<arr[s]<<" ";
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    pivotind=s+count;
    swap(arr[s],arr[pivotind]);

    cout<<"putting the pivot element in its pos : ";
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int i=s,j=e;
    
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
    cout<<"Putting array elements in their correct pos : ";
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    cout<<endl;

    return pivotind;
}


void quicksort(int arr[], int s, int e){
    if(s>=e){
        return;
    }

cout<<endl<<endl<<"Call : "<<call++<<endl<<endl;
    int p=partition(arr,s,e);


cout<<"Calling quicksort for left side"<<endl;
    quicksort(arr,s,p-1);

cout<<"Calling quicksort for right side"<<endl;
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
    cout<<endl<<endl;


    quicksort(arr,0,n-1);


    cout<<endl<<endl<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}
