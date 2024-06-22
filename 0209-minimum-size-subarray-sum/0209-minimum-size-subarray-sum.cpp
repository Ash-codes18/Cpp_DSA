// Approach-1 : Using Sliding Window 

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int len = INT_MAX;
//         int sum = 0, count = 0, j = 0, s = 0;

//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//             j++;
//             count++;
//             if(sum>=target){
//                 len = min(len,count);
//                 break;
//             }
//         }

//         while(j<n){
//             cout<<sum<<endl;
//             if(sum>target){
//                 sum-=nums[s++];
//                 count--;
//                 if(sum>=target){
//                     len = min(len,count);
//                 }
//             }
//             else if(sum<target){
//                 sum+=nums[j++];
//                 count++;
//             }
//             else{
//                 sum-=nums[s++];
//                 sum+=nums[j++];
//                 len = min(len,count);
//             }
//         }

//         while(s<n-1 && sum>=target){
//             sum-=nums[s++];
//             count--;
//             if(sum>=target){
//                 len = min(len,count);
//             }
//         }


// return (len==INT_MAX)?0:len;


//     }
// };


//  Approach-2 : Using 2 Pointers

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int len = INT_MAX;
        int sum = 0, count = 0,i = 0, j = 0;

        while(i<n){
            sum+=nums[i++];
            while(sum>=target){
                len=min(len,i-j);
                sum-=nums[j++];
            }
        }

return (len==INT_MAX)? 0:len;


    }
};