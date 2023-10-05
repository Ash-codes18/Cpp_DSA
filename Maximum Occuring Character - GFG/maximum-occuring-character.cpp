//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here

        int arr[26]={0};

        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }

        int max=0;
        char ans='a';
        
        for(int i=0;i<26;i++){

             if(arr[i]>max){
                max=arr[i];
                ans=i+'a';
            }

            else if(arr[i]==max && i+'a'<ans){
                    ans=i+'a';
            }

        }
        return ans;

    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends