//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        
        int ans;
        int a=1;
        int b=1;
        int z=1000000007;
        
        int i=2;
        while(i<n){
            
            ans=(a+b)%z;
            a=b;
            b=ans;
            i++;
        }
        if(n==1 || n==2){
            return 1;
        }
        return ans;
        
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends