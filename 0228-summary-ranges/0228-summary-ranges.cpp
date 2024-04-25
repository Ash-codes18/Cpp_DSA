class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        if(n==0){
            return ans;
        }

        long long s=nums[0];
        long long e=nums[0];
        string val;

        for(int i=0;i<n;i++){
            if(nums[i]-e>1){
                if(s!=e){
                    val = to_string(s) + "->" + to_string(e);
                }
                else{
                    val = to_string(s);
                }
                ans.push_back(val);
                s=nums[i];
            }
            e=nums[i];
        }

        if(s!=e){
            val = to_string(s) + "->" + to_string(e);
        }
        else{
            val = to_string(s);
        }

        ans.push_back(val);

return ans;

    }
};