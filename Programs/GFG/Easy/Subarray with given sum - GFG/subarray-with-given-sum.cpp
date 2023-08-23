//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{ 
    public: 
    //Function to find a continuous sub-array which adds up to a given number. 
    vector<int> subarraySum(vector<int>arr, int n, long long s) 
    { 
        // Your code here 
        vector<int> ans; 
        if(s==0){ 
            ans.push_back(-1); 
            return ans; 
        } 
        int i = 0; 
        long long temp = s; 
        int l = 0, r = 0; 
        while(i<n){ 
            if(s==0){ 
                ans.push_back(l+1); 
                ans.push_back(r+1); 
                return ans; 
            } 
             
            else if(s<0){ 
                while(s<0){ 
                    s+=arr[l]; 
                    l++; 
                } 
                i--; 
            } 
             
            else{ 
                r = i; 
                s-=arr[i]; 
            } 
            i++; 
        } 
         
        while(s<0 && l<n){ 
            s+=arr[l]; 
            l++; 
        } 
         
        if(s==0){ 
            ans.push_back(l+1); 
            ans.push_back(r+1); 
        } 
         
        else 
            ans.push_back(-1); 
         
        return ans; 
    } 
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends