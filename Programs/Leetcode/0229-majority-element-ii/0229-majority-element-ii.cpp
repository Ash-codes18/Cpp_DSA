// Approach - 1 : using Hashmap (extra space) in linear time


// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i : nums) mp[i]++;
//         vector<int> ans;
//         for(auto i : mp) if(i.second>nums.size()/3) ans.push_back(i.first);
//         return ans;
//     }
// };



// Approach - 2 : Using Sorting -> O(nlogn) time and constant space; 


// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();

//         sort(nums.begin(),nums.end());
//         vector<int> ans;
//         int count = 1;


//         for(int i=0;i<n;i++){
//             if(i+1<n && nums[i]==nums[i+1]) count++;
//             else{
//                 if(count>nums.size()/3){
//                     ans.push_back(nums[i]);
//                 }
//                 count = 1;
//             }
//         }

//         return ans;
//     }
// };




// Approach - 3 : In O(n) time and O(1) space using Boyer-Moore Voting Algorithm


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        int a,b;
        int c1 = 0, c2 = 0;


        for(int i=0;i<n;i++){
            if(c1==0 && nums[i]!=b){
                a = nums[i];
                c1++;
            }
            else if(c2 == 0 && nums[i]!=a){
                b = nums[i];
                c2++;
            }
            else if(a == nums[i]) c1++;
            else if(b == nums[i]) c2++;

            else{
                c1--;
                c2--;
            }

        }

        c1=0,c2=0;

        for(int i : nums){
            if(i==a) c1++;
            if(i==b) c2++;
        }

        if(c1>n/3) ans.push_back(a);
        if(c2>n/3 && a!=b) ans.push_back(b);

        return ans;
    }
};
