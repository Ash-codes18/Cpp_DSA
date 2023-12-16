#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the last number: ";
    cin >> n;


    if (n > 1) {
        for (int i = 2; i <= n; i++) {
        bool flag = true;

            for (int j = 2; j <= i; j++) {
                if (i % j == 0 && j != i) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << i << " ";
            }
        }
    } else {
        cout << "No prime numbers till " << n;
    }

    return 0;
}

