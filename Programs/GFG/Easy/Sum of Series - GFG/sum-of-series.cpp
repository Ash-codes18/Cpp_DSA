//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    // function to return sum of 1, 2, ... n
    long long seriesSum(int n) {
        // code here
        long long sum = static_cast<long long>(n) * (n + 1) / 2;
        return sum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends