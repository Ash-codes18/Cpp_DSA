class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        vector<vector<int>> arr;
        arr.push_back(nums);
        
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            for(int j=1;j<arr[i].size();j++){
                temp.push_back((arr[i][j-1]+arr[i][j])%10);
            }
            arr.push_back(temp);
        }

        return arr[nums.size()-1][0];
    }
};