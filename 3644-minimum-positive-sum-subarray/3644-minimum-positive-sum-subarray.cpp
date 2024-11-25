class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        while(l<=r){
            for(int i=0;i<n-l+1;i++){
                int sum = 0;
                for(int j=i;j<l+i;j++){
                    sum+=nums[j];
                }
                // cout<<sum<<endl;
                if(sum>0) ans = min(ans,sum);
            }
            l++;
        }

        return (ans==INT_MAX)? -1:ans; 
    }
};