// TC -> O (nlogn)

/*
class Solution {
public:
 int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if((nums[i+1]-nums[i])!=1){
                return (nums[i]+1);
            }
        }

         if(nums[0]==1 ){
            return 0;
        }

        return nums[nums.size()-1]+1;
    }
};
*/


// TC -> O(n) using maths


/*
class Solution {
public:
 int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int fsum=(n*(n+1))/2;
        int sum=0;


        for(int i:nums){
            sum+=i;
        }


        return fsum-sum;


    }
};
*/


// TC -> O(n) using bit manipulation 


/*
class Solution {
public:
 int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int ans1=nums[0];
        int ans2=1;

        for(int i=1;i<n;i++){
            ans1^=nums[i];
        }   

        for(int i=2;i<n+1;i++){
            ans2^=i;
        }

return ans1^ans2;

    }
};

*/


class Solution {
public:
 int missingNumber(vector<int>& nums) {
        int n=nums.size();


        int ans=n;

        for(int i=0;i<n;i++){
            ans^=i;
            ans^=nums[i];
        }
return ans;
    }
};


