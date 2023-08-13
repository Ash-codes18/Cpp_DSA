class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0,rs=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            rs+=nums[i];
        }
        for(int i=0;i<n;i++){
            ls+=nums[i];
            if(rs==ls){
                return i;
            }
            rs-=nums[i];

        }
       return -1;
    }
};