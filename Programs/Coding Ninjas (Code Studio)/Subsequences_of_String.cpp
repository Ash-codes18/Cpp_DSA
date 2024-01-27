#include <bits/stdc++.h> 

    void solve(string arr, string output, int ind, vector<string>& ans){

        if(ind>=arr.size()){
			if(!output.empty()){
            	ans.push_back(output);
			}
            return;
        }

        solve(arr,output,ind+1,ans);
        solve(arr,output+arr[ind],ind+1,ans);

    }




vector<string> subsequences(string str){
	
	// Write your code here
	        
        vector<string> ans;
        string output;
        int ind=0;

        solve(str,output,ind,ans);

		return ans;
}
