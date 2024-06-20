// Approach-1 : Using extra space


// class Solution {
// public:
//     vector<int> leftRightDifference(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> l(n);
//         vector<int> r(n);

//         for(int i=1;i<n;i++){
//             l[i]=l[i-1]+nums[i-1];
//         }

//         for(int i=n-2;i>=0;i--){
//             r[i]=r[i+1]+nums[i+1];
//         }

//         for(int i=0;i<n;i++){
//             nums[i] = abs(r[i]-l[i]);
//         }


// return nums ;

//     }
// };



// Approach-2 : Without any extra space


class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        int rsum = 0;
        int lsum = 0;

        for(int i=n-1;i>=1;i--){
            rsum+=nums[i];
        }


        for(int i=0;i<n;i++){
            int temp = nums[i];
            if(i>0){
                rsum-=temp;
            }
            nums[i] = abs(rsum-lsum);
            lsum+=temp;
        }


return nums;

    }
};