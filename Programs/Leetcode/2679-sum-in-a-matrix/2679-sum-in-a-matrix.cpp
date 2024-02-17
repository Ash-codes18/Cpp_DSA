class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>> vals(m);

        for(int i=0;i<n;i++){
            sort(nums[i].begin(),nums[i].end());
            for(int j=0;j<m;j++){
                vals[j].push_back(nums[i][j]);
            }
        }

        int ans=0;


        for(auto i:vals){
            int max=0;
            for(int j :i){
                if(j>max){
                    max=j;
                }
            }
            ans+=max;
        }


return ans;
    }
};