// Approach - 1 -> Naive Solution 

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> result;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] + nums[j] == target) {
//                     result.push_back(i);
//                     result.push_back(j);
//                     return result;
//                 }
//             }
//         }

//         return result;
//     }
// };


// Approach-2 -> Optimized Approach in O(n) using hashmap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2,0);
        int n = nums.size();

        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<n;i++){
            if(mp[target-nums[i]] && i!=mp[target-nums[i]]){
                result[0]=i;
                result[1]=mp[target-nums[i]];
                break;
            }
        }

        
        return result;
    }
};

