#include <iostream>
using namespace std;

int main() {
    
    int arr[100] = {0};

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the element to be inserted: ";
    int element;
    cin>>element;

    cout<<"Enter the position: ";
    int pos;
    cin>>pos;

    for(int i=n-1; i>=pos; i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = element;
    n++;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}