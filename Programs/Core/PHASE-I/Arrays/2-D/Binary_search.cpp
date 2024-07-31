#include <iostream>
using namespace std;

int main(){


     int arr[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    int rows=3;
    int cols=4;
    int target=11;

    int mul=rows*cols;

    int flag=0;
    int start=0,end=mul-1,mid;

    while(start<=end){

        mid=(start+end)/2;

        int erow=mid/cols;
        int ecol=mid%cols;

        if(arr[erow][ecol]==target){
            cout<<"Element found at row="<<erow+1<<" & col="<<ecol+1<<endl;
            flag=1;
            break;
        }

        else if(arr[erow][ecol]<target){
            start=mid+1;
        }

        else{
            end=mid-1;
        }

    }


    if(!flag){
        cout<<"Element not found in the array"<<endl;
    }


    return 0;
}