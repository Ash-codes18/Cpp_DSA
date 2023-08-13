//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends

// #define MAX 100

class Solution {
public:
    int findK(int a[MAX][MAX], int n, int m, int k) {
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = m - 1;
        int count = 0;

        while (count < n * m) {
            
            for (int i = left; i <= right; i++) {
                count++;
                if (count == k)
                    return a[top][i];
            }
            top++;

            
            for (int i = top; i <= bottom; i++) {
                count++;
                if (count == k)
                    return a[i][right];
            }
            right--;

    
            for (int i = right; i >= left; i--) {
                count++;
                if (count == k)
                    return a[bottom][i];
            }
            bottom--;

            for (int i = bottom; i >= top; i--) {
                count++;
                if (count == k)
                    return a[i][left];
            }
            left++;
        }

        return -1; 
    }
};




//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends