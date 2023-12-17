#include <iostream>
using namespace std;


bool ispresent(int arr[], int n, int key){

    if(n==0){
        return false;
    }

    if(arr[n-1]==key){
        return true;  
    }

    else{
        return ispresent(arr,n-1,key);  
    }

}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter "<<n<<" numbers : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter the element to search : ";
    cin>>element;


    ispresent(arr,n,element)?cout<<"Value Present."<<endl:cout<<"Value Absent."<<endl;

    return 0;
}