#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int t; 
    cin >> t; 
    while (t--) { 
        int n, m; 
        cin >> n >> m; 
        vector<vector<int>> arr(n, vector<int>(m, 0)); 
        for (int i = 0; i < n; i++) { 
            int s1, s2; 
            if (i % 2 == 0) { 
                s1 = 2; 
                s2 = 3; 
            } else { 
                s1 = 3; 
                s2 = 2; 
            } 

            for (int j = 0; j < m - 1; j += 2) { 
                arr[i][j] = s1; 
                arr[i][j + 1] = s2; 
            } 
 
            if (m % 2 != 0) { 
                arr[i][m - 1] = s1; 
            } 
        } 
 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                cout << arr[i][j] << " "; 
            } 
            cout << endl; 
        } 
    } 
 
    return 0; 
}
