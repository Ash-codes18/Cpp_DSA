//TLE for 1 test case

/*
class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n=nums.size();
        int m=operations.size();
        int i=0,j=0;

        while(i<m){
            if(j>=n){
                j=0;
            }
            if(operations[i][0]==nums[j]){
                nums[j]=operations[i][1];
                i++;
            }
            else{
                j++;
            }
        }

return nums;
        
    }
};
*/


class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n = nums.size();
        int m = operations.size();
        map<int, int> mp;

        
        // since all values of nums are distinct we can use them as keys in a map 

        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }


        for (int i = 0; i < m; i++) {
            auto it = mp.find(operations[i][0]);
            if (it != mp.end()) {
                int value = it->second;
                mp.erase(it);
                mp[operations[i][1]] = value;
            }
        }

        map<int,int> val;

        for(auto i : mp){
            val[i.second]=i.first;
        }

        int k=0;

        for(auto i:val){
            nums[k++]=i.second;
        }

        return nums;
    }
};

