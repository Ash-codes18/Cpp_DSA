// Approach-1 -> TLE

/*
class Solution {
public:

bool solve(vector<int> nums, int ind){
    if(ind>=nums.size()-1){
        return true;
    }

    for(int i=1;i<=nums[ind];i++){
        if(solve(nums,ind+i)){
            return true;
        }
    }

return false;

}

    bool canJump(vector<int>& nums) {

        if(nums.size()<=1){
            return true;
        }

        int n=nums.size();
        return solve(nums,0);

    }
};
*/



//Approach-2 -> Failed


/*
class Solution {
public:

bool solve(vector<int> nums){
   int n=nums.size();

    for(int i=0;i<n;i++){
        if(nums[i]==0){
            return false;
        }
        for(int j=i+1;j<=i+nums[i];j++){
            if(j>=n-1){
                return true;
            }
        }
    }

return false;

}

    bool canJump(vector<int>& nums) {

        if(nums.size()<=1){
            return true;
        }

        int n=nums.size();
        return solve(nums);

    }
};

*/


// Approach-3

class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxjump=nums[0];


        for(int i=0;i<n;i++){

            if(i>maxjump){
                return false;
            }

            maxjump=max(maxjump,nums[i]+i);

            if(maxjump>=n-1){
                return true;
            }

        }

    return false;

    }
};


