#include <iostream>
using namespace std;

//the arguments that we set to have a default value in case they are not passed to the function are known as default arguments

// Default arguments can only starts from the rightmost side we cannot directly make any argument in the between a default argument

void print(int arr[], int size, int start=0, int end=10){
    for(int i=start;i<end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// in this function start and end are default args having a default val in case no value for them is passed


int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int start,end;

    start=2;
    end=7;

    print(arr,10,start,end);

    print(arr,10);

    return 0;
}