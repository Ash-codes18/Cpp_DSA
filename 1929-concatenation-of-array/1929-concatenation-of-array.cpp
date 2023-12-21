class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n*2,0);

        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }

        for(int i=0;i<n;i++){
            arr[i+n]=nums[i];
        }

return arr;
    }
};