// Approach - 1 : Using maps

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        unordered_map<int,int> mp;
        for(int &i : nums) mp[i]++;

        for(int &i : nums){
            if(mp[i]){
                mp[i]--;
                if(mp[k-i]){
                    ans++;
                    mp[k-i]--;
                }
            }
        }

        return ans;
    }
};

// Approach -2 Using Sorting & 2 pointers

// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
        
//     }
// };