//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        map<pair<int, int>, int> mp;
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            
            // find out the gcd of numerator and denominator to get least value of two
            int k = __gcd(numerator[i], denominator[i]);
            // Divide by GCD to get least value of numerator and denominator possible
            int num = numerator[i] / k;
            int den = denominator[i] / k;
            // Find out whether 1 - (num/den) was encountered before or not
            int co_num = den - num;
            
            cnt += mp[{co_num, den}];
            mp[{num, den}] += 1;
        }
        return cnt;
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
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends