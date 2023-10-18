#include <iostream>
#include <algorithm>
using namespace std;

void missingNumbers(int arr[], int n, int brr[], int m) {
    sort(arr, arr+n);
    sort(brr, brr+m);
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr[i] == brr[j]) {
            i++;
            j++;
        } else {
            cout << brr[j] << " ";
            j++;
        }
    }
    while (j < m) {
        cout << brr[j] << " ";
        j++;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;

    int arr2[m];

     for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    missingNumbers(arr, n, arr2, m);

    return 0;
}
