class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> con(n,0);
        int max=nums[0];

        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
            con[i]=nums[i]+max;
        }

        vector<long long> ans;

long long sum;
        for(int i=0;i<n;i++){
            sum+=con[i];
            ans.push_back(sum);    
        }

    return ans;

    }
};