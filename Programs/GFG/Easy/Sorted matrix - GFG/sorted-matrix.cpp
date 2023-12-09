//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        
        int row=Mat.size();
        int col=Mat[0].size();
        
        vector<int> arr;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr.push_back(Mat[i][j]);
            }
        }
        
        sort(arr.begin(),arr.end());
        
        int count=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                Mat[i][j]=arr[count];
                count++;
            }
        }
       
       return Mat; 
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends