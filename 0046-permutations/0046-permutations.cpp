class Solution {
public:

void permu(vector<int> nums, int ind, vector<vector<int>>& ans) {
    if (ind >= nums.size()) {
        ans.push_back(nums);
        return;
    }


    for(int i=ind;i<nums.size();i++){
        swap(nums[ind],nums[i]);
        permu(nums,ind+1,ans);
        swap(nums[ind],nums[i]);    
    }



}

    vector<vector<int>> permute(vector<int>& nums) {

        int ind=0;
        vector<vector<int>> ans;
        permu(nums,ind,ans);


        return ans;

    }
};