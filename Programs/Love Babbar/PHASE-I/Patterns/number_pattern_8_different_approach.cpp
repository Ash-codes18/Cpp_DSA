#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows in the pattern: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int space = n-i-1;
        while (space >0) {
            cout << " ";
            space--;
        }

        int j = 0;
        while (j <= i) {
            cout << j + 1;
            j++;
        }

       int last = i;
        while (last >0) {
            cout << last;
            last--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
