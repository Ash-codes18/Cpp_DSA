class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int ld = INT_MAX;
        int ans;
    

        for(int i=0;i<n-2;i++){

            int s = i+1;
            int e = n-1;

            while(s<e){
                int sum = nums[i] + nums[s] + nums[e];
                if(ld>abs(sum-target)){
                    ld = abs(sum-target);
                    ans = sum;
                }
                if(sum<target){
                    s++;
                }
                else{
                    e--;
                }
            } 

        }

return ans;

    }
};