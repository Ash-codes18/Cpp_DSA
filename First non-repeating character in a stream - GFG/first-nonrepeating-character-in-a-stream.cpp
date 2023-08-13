//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> count(26, 0); 
        queue<char> queue; 
        
        string result;
        
        for (char ch : A) {
            count[ch - 'a']++; 
  
            if (count[ch - 'a'] == 1) {
                queue.push(ch);
            }
    
            while (!queue.empty() && count[queue.front() - 'a'] > 1) {
                queue.pop();
            }
            
            if (queue.empty()) {
                result.push_back('#');
            } else {
                result.push_back(queue.front());
            }
        }
        
        return result;
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends