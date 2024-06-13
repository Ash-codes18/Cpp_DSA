class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> ans;
        int m = target.size();
        int ind = 0;

        for(int i =1;i<=n;i++){
            if(ind==m){
                return ans;
            }
            st.push(i);
            ans.push_back("Push");
            if(i==target[ind]){
                ind++;
            }
            else{
                st.pop();
                ans.push_back("Pop");
            }
        }


        return ans;

    }
};