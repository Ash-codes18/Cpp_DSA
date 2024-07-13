class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n);
        vector<int> s(n);

        int mul = 1, x=0;

        for(int i : nums){
            mul*=i;
            p[x++]=mul;
        }

        mul = 1;

        for(int i=n-1;i>=0;i--){
            mul*=nums[i];
            s[i]=mul;
        }


        for(int i=0;i<n;i++){
            int l = 1 ,r = 1;

            if(i!=0) l = p[i-1];
            if(i!=n-1) r = s[i+1];

            nums[i] = l*r;
        }

    return nums;

    }
};