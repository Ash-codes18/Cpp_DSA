// Approach-1 : Bruteforce using map

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int n = nums.size();
//         unordered_map<int,vector<int>> mp;

//         for(int i=0;i<n;i++){
//             mp[nums[i]].push_back(i);
//         }


//         for(auto i : mp){
//             if(i.second.size()>1){
//                 for(int j=1;j<i.second.size();j++){
//                     if(abs(i.second[j]-i.second[j-1]) <=k) return true;
//                 }
//             }
//         }

// return false;

//     }
// };


// Approach-2 : Sliding Window along with map


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=i;
            }
            else{
                int val = abs(mp[nums[i]]-i);
                if(val<=k) return true;
                mp[nums[i]] = i;
            }
        }


return false;

    }
};