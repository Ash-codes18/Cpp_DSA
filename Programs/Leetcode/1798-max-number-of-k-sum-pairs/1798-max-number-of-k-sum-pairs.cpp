// Approach - 1 : Using maps

// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         int n = nums.size();
//         int ans = 0;

//         unordered_map<int,int> mp;
//         for(int &i : nums) mp[i]++;

//         for(int &i : nums){
//             if(mp[i]){
//                 mp[i]--;
//                 if(mp[k-i]){
//                     ans++;
//                     mp[k-i]--;
//                 }
//             }
//         }

//         return ans;
//     }
// };


// Approach -2 Using Sorting & 2 pointers

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int ans = 0;

        sort(nums.begin(),nums.end());      

        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==k){
                ans++;
                i++;
                j--;
            }
            else if(sum<k) i++;
            else j--;
        }

        return ans;
    }
};