// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i : nums){
//             mp[i]++;
//             if(mp[i]>nums.size()/2) return i;
//         }
//         return 0;
//     }
// };


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        int count = 0;
        int ele;

        for(int i=0;i<n;i++){
            if(count==0){
                ele = nums[i];
                count++;
            }
            else{
                if(nums[i]==ele) count++;
                else count--;
            }
        }

        return ele;
    }
};