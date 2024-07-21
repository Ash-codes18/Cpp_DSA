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

        int n = nums.size();
        int ind = -1;

        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                ind = i;
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