#include <iostream>
using namespace std;


bool BinSearch(int arr[], int start, int end, int key){

    if(start>end){
        return false;
    }

    int mid=(start+end)/2;

    if(arr[mid]==key){
        return true;  
    }

    else if(arr[mid]>key){
        return BinSearch(arr,start,mid-1,key);
    }

    else{
        return BinSearch(arr,mid+1,end,key);
    }

}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter "<<n<<" sorted numbers : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter the element to search : ";
    cin>>element;


    BinSearch(arr,0,n-1,element)?cout<<"Value Present."<<endl:cout<<"Value Absent."<<endl;

    return 0;
}