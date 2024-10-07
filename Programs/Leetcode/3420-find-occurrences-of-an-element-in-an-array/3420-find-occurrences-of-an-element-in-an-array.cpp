class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n = nums.size();
        int m = queries.size();
        vector<int> indices;
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(nums[i]==x){
                indices.push_back(i);
            }
        }

        int s = indices.size();

        for(int i=0;i<m;i++){
            if(queries[i]<=s){
                ans.push_back(indices[queries[i]-1]);
            }
            else ans.push_back(-1);
        }

        return ans;

    }
};