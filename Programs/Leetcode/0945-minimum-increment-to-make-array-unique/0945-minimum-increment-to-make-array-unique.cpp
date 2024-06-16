// TLE


// class Solution {
// public:
//     int minIncrementForUnique(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         sort(nums.begin(),nums.end());    
//         map<int,bool> mp;


//         for(int i=0;i<n;i++){
//             if(mp.find(nums[i])!=mp.end()){

//                     int j = nums[i];
//                     while(mp[j++]){
//                         nums[i]++;
//                         count++;
//                     }
//             }
//             mp[nums[i]]=true;
//         }



//         return count;

//     }
// };



class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int count = 0;
        int temp = nums[0];
        
        for(int i=1;i<n;i++) {
            
            if(nums[i]<=temp){
                count += temp-nums[i]+1;
                temp++;
            }
            else{
                temp = nums[i];
            }

        }
        
        return count;
    }
};
