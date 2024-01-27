//Approach-1 :  TLE

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         int max=INT_MIN;

//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum>max){
//                     max=sum;
//                 }
//             }
//         }
// return max;
//     }
// };


// Approach-2


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int max=INT_MIN;


        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(sum<nums[i]){
                sum=nums[i];
            }

            if(max<sum){
                max=sum;
            }
        }


return max;
    }
};