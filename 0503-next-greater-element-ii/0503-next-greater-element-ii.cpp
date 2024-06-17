class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        stack<int> st;
        stack<int> cyclic;
        vector<int> ans(n,-1);

        for(int i=n*2-1;i>=0;i--){

            int num = nums[i%n];

            while(!st.empty() && st.top()<=num){
                st.pop();
            }
            if(i<n && !st.empty()){
                ans[i] = st.top();
            }
            
            st.push(num);

        }


        return ans;

    }
};