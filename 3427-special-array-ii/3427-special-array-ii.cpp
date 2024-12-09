class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        int n = nums.size();
        vector<int> valid(1,0);

        for(int i=1;i<n;i++){
            int temp = valid[i-1];
            if(nums[i-1]%2 == nums[i]%2) temp++;
            valid.push_back(temp);
        }

        vector<bool> ans;

        for(auto &i : q){
            ans.push_back(valid[i[0]]==valid[i[1]]);
        }

        return ans;
    }
};