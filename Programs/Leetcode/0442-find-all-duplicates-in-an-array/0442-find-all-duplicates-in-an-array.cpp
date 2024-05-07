class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {


    int n=nums.size();
    sort(nums.begin(),nums.end());
        

    vector<int> ans;

    int val = nums[0];
    

    for(int i=1;i<n;i++){
        if((val^nums[i]) ==0){
            ans.push_back(val);
        }
        val=nums[i];
    }

    return ans;


    }
};