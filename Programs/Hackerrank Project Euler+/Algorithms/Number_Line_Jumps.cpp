#include <iostream>
#include <vector>

using namespace std;

string angryProfessor(int k, vector<int> a) {
    int on_time = 0;
    for (int i : a) {
        if (i <= 0) {
            on_time++;
        }
    }
    if (on_time >= k) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << angryProfessor(k, a) << endl;
    }
    return 0;
}
