#include <iostream>
using namespace std;

void print(int arr[][4]){
    
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void finder(int arr[][4], int t){
    bool found=0;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==t){
                cout<<"Target element present in row: "<<i+1<<" Column: "<<j+1;
                found=1;
                break;
            }
        }
    }
    if(!found){
        cout<<"Target element is not present in the matrix";
    }
}

int main(){

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};

    cout<<"Elements of the array : ";
    print(arr);

    int target;
    cout<<"Enter the element to search : ";
    cin>>target;

    finder(arr,target);


    return 0;
}