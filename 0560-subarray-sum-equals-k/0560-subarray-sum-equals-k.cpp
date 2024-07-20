//Approach-1 : BruteForce - O(n^2);

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();

//         int sum=0;
//         int count=0;

//         for(int i =0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum==k){
//                     count++;
//                 }
//             }
//             sum=0;
//         }
//         return count;
//     }
// };




// Works for only positivess


// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();

//         int sum=0;
//         int count=0;
//         int j=0;

//         for(int i=0;i<n;i++){
//             sum+=nums[i];
            
//             if(sum==k){
//                 count++;
//             }
//             else{
//                 while(sum>k){
//                     sum-=nums[j++];
//                 }
//                 if(sum==k && i!=0){
//                     count++;
//                 }
//             }

//         }
      

//         return count;
//     }
// };


// Approach - 2 -> HashMap + Prefix Sum


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n = nums.size();

        int sum=0;
        int count=0;
   
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) count++;
            if(mp.count(sum-k)) count+=mp[sum-k];
            mp[sum]++; 
        }
  
        return count;
    }
};