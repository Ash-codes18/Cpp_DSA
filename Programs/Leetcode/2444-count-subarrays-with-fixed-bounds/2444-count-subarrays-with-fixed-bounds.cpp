class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        
        int minIndex = INT_MIN;
        int maxIndex = INT_MIN;
        int broke = -1;
        long long ans = 0;


        for(int i=0;i<n;i++){
            
            if(nums[i]<minK || nums[i]>maxK){
                broke = i;
            }

            if(nums[i]==minK){
                minIndex = i;
            }

            if(nums[i]==maxK){
                maxIndex = i;
            }

            if(minIndex!=INT_MIN && maxIndex!=INT_MIN){
                int start = min(minIndex,maxIndex);
                if(broke<start){
                    ans += start-broke;
                }
            }

        }
    

return ans;

    }
};