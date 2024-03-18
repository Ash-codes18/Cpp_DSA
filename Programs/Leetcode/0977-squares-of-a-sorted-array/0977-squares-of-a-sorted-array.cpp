class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1,e=n-1;
        
        vector<int> ans(n,0);
        
        
        while(i<=j){
            if(abs(nums[i])>nums[j]){
                ans[e--]=(nums[i]*nums[i]);
                i++;
            }
            else{
                ans[e--]=(nums[j]*nums[j]);
                j--;
            }
        }


        return ans;
    }
};