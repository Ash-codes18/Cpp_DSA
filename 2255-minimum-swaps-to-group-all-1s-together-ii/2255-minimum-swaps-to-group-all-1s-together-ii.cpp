class Solution {
public:
    int minSwaps(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
       
        int n = nums.size();
        int count = 0;

        for(int i : nums) if(i==1) count++;

        int ones = 0;

        for(int i=0;i<count;i++){
            if(nums[i]==1) ones++;
        }

        int temp = ones, j = 0;

        for(int i=count;i<n*2;i++,j++){
            if(nums[j%n]==1) temp--;
            if(nums[i%n]==1) temp++;
            ones = max(ones,temp);
        }

        return (ones == 0)? 0 : count-ones;
    }
};