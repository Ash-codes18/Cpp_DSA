class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int post = 1;
        int ans = INT_MIN;
        int MOD = 1e9;


        for(int i=0;i<n;i++){

            if(pre==0){
                pre = 1;
            }
            if(post==0){
                post = 1;
            }

            pre*=nums[i];
            post*=nums[n-i-1];

            cout<<pre<<" : "<<post<<endl;

            ans=max(ans,pre);
            ans=max(ans,post);

            pre%=MOD;
            post%=MOD;

        }
        

        return ans;

    }
};