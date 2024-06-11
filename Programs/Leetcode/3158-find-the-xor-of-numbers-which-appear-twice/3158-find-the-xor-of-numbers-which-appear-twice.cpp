class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        
        map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        int ans = 0;

        for(auto i : mp){
            if(i.second==2){
                ans^=i.first;
            }
        }

        return ans;


    }
};