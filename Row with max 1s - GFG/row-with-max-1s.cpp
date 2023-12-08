//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int count=INT_MIN;
	    int row=-1;
	    int temp=0;

        
        int rind=0;
        int cind=m-1;
        

        for(int i=0;i<n;i++){
          while(arr[rind][cind]!=0){
              temp++;
              cind--;
          }
          
          if(temp>count && temp!=0){
              count=temp;
              row=rind;
          }
          rind++;
          cind=m-1;
          temp=0;
            
        }
        
        
    return row;    

	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends