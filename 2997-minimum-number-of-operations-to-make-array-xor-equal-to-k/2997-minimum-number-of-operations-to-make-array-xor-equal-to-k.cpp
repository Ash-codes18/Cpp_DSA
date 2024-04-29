class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int n = nums.size();
        int f = nums[0];
        int count = 0;


        for(int i =1;i<n;i++){
            f^=nums[i];
        }

        while(k || f){
            if((k%2)!=(f%2)){
                count++;
            }
            k/=2;
            f/=2;
        }


    return count;


    }
};