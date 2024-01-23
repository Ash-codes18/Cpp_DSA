class Solution {
public:

    int solve(int a, int b){
        int val=a%b;
        if(val==0){
            return b;
        }
        return solve(b,val);
    }


    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return solve(nums[0],nums[n-1]);
        
    }
};