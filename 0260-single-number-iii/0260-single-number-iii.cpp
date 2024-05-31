// With extra Space -> in O(n) time :

// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//             int n = nums.size();
//             vector<int> ans(2,0);
//             map<int,bool> mp;


//             for(int i : nums){
//                 if(mp[i]==false){
//                     mp[i]=true;
//                 }
//                 else{
//                     mp[i]=false;
//                 }
//             }

//             int ind=0;

//             for(auto i : mp){
//                 if(i.second == true){
//                     ans[ind++]=i.first;
//                 }
//             }

// return ans;


//     }
// };




// Without extra Space -> in O(n) time :


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
            int n = nums.size();
            long long val = nums[0];

            for(int i =1;i<n;i++){
                val^=nums[i];
            }

            vector<int> ans(2,0);

            int setbit = val & -val;
            // cout<<setbit;


            for(int i : nums){
                if((setbit & i) == 0){
                    ans[0]^=i;
                }
                else{
                    ans[1]^=i;
                }
            }

return ans;


    }
};