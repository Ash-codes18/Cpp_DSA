class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0]+nums[1];
        int count=1;
        for(int i=2;i<n;i+=2){
            if(sum==nums[i]+nums[i+1]){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};