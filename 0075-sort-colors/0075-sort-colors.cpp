class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                temp.push_back(0);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                temp.push_back(1);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==2){
                temp.push_back(2);
            }
        }
        
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
        
    }
};