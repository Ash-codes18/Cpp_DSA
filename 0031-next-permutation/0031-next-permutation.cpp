// Using STL

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }
// };


// The Approach

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        ios::sync_with_stdio(0);
        cin.tie(0);

        int n = nums.size();
        int ind = -1;

        for(int i=n-1;i>=0;i--){
            if(i-1>=0 && nums[i-1]<nums[i]){
                ind = i-1;
                break;
            }
        }

        if(ind == -1){
            reverse(nums.begin(),nums.end());
        }

        else{
            for(int i=n-1;i>=ind;i--){
                if(nums[i]>nums[ind]){
                    swap(nums[i],nums[ind]);
                    break;
                }
            }

            reverse(nums.begin()+ind+1,nums.end());
        }

    }
};