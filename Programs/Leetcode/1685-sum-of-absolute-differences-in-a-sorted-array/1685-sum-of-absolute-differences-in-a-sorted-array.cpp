class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> pre;
        vector<int> post;

        int sum = 0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            pre.push_back(sum);
        }

        // for(int i : pre){
        //     cout<<i<<" ";
        // }
        // cout<<endl;

        sum=0;

        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            post.push_back(sum);
        }

        // for(int i : post){
        //     cout<<i<<" ";
        // }
        // cout<<endl;

        reverse(post.begin(),post.end());

        vector<int> ans;

        for(int i=0;i<n;i++){
            int add=0;
            add+=(nums[i]*(i+2));
            if(i+1<n){
                add+=post[i+1];
            }

            // cout<<add<<" : ";

            int diff=0;
            diff+=(nums[i]*(n-i));
            diff+=pre[i];

            // cout<<diff<<endl;

            ans.push_back(add-diff);


        }


        return ans;


    }
};