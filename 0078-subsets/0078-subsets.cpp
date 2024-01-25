class Solution {
public:

    void solve(vector<int> nums, vector<int> output, int ind, vector<vector<int>>& ans){

        if(ind>=nums.size()){
            ans.push_back(output);
            return;
        }

//exclude
        solve(nums,output,ind+1,ans);
//include
        output.push_back(nums[ind]);
        solve(nums,output,ind+1,ans);

    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;

        int ind=0;

        solve(nums,output,ind,ans);
        
        return ans;

    }
};