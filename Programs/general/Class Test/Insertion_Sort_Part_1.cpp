#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void insertionSort1(int n, int arr[]) {
    int x = arr[n-1];
    int i = n-2;
    while (i >= 0 && arr[i] > x) {
        arr[i+1] = arr[i];
        i--;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    arr[i+1] = x;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}


int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0 ;i<n;++i){
        cin>>arr[i];
    }

    
    insertionSort1(n,arr);

    return 0;
}