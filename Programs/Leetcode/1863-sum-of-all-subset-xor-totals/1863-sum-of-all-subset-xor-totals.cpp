class Solution {

private:

    int getxor(vector<int> arr){
        if(arr.empty()){
            return 0;
        }
        int val = arr[0];
        for(int i = 1 ; i<arr.size();i++){
            val^=arr[i];
        }
        return val;
    }

    void doxor(vector<int> nums, int ind, int &sum,vector<int> output){
         if(ind>=nums.size()){
            int val = getxor(output);
            sum+=val;
            return;
        }

//exclude
        doxor(nums,ind+1,sum,output);
//include
        output.push_back(nums[ind]);
        doxor(nums,ind+1,sum,output);
    }

public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> output;

        doxor(nums,0,sum,output);

        return sum;

    }
};





// One line answer


// class Solution {
// public:
//     int subsetXORSum(vector<int>& nums, int i = 0, int x = 0) {
//         return i == nums.size() ? x : subsetXORSum(nums, i + 1, x ^ nums[i]) + subsetXORSum(nums, i + 1, x);
//     }
// };