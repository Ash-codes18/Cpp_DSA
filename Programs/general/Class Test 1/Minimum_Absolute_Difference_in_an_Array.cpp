#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min=INT_MAX;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j]) < min){
                min = abs(arr[i]-arr[j]);
            }
        }
    }

    cout<<min<<endl;

    return 0;
}