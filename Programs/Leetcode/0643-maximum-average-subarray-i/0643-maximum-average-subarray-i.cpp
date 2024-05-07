// Approach-1 -> TLE



// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int n = nums.size();
//         int sum=INT_MIN;

//         for(int i=0;i<n;i++){
//             if(n-i<k){
//                 break;
//             }
//             int j=0;
//             int csum=0;
//             while(j<k && j+i<n){
//                 csum+=nums[i+(j++)];
//             }
//             sum=max(csum,sum);

//         }

//     return (double)sum/k;

//     }
// };




// Approach-2



class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int csum=0;
        int sum=INT_MIN;

        for(int i=0;i<k;i++){
            csum+=nums[i];
        }

        sum=max(sum,csum);

        int s=0;
        int e=k;

        while(e<n){
            csum-=nums[s++];
            csum+=nums[e++];

        sum=max(csum,sum);

        }


return (double)sum/k;


    }
};


