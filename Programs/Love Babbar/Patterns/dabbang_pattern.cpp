#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows in the pattern: ";
    cin >> n;

    int i = 0;

    while (i < n) {

// First Triangle
        int j = 0;
        while (j <n-i) {
            cout << j+1;
            j++;
        }

// Stars
int stars=0;
        while(stars<i*2){
            cout<<"*";
            stars++;
        }

//SECOND TRIANGLE
 int k = 0;
        while (k <n-i) {
            cout << n-k-i;
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}