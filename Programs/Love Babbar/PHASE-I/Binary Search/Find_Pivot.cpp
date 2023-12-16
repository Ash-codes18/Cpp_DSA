//Finding the pivot in a sorted array in O(Log N)

#include <iostream>
using namespace std;

int main(){

    int arr[8]={45,67,90,94,1,4,8,12};
    int pivot;

    int start=0;
    int end=7;

    while(start<end){
        int mid =(start+end)/2;
        
        if(arr[mid]<=arr[end]){
            end=mid;
        }
        else{
            start=mid+1;
        }
    }
    pivot=start;
cout<<"The pivot is at index : "<<pivot;
    return 0;
}