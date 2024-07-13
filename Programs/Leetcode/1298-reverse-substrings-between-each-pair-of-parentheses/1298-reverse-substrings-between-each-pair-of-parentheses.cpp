class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<char> st;
        queue<char> q;
        string ans;

        for(int i=0;i<n;i++){
            if(s[i]!=')') st.push(s[i]);
            else{
                while(st.top()!='('){
                    q.push(st.top());
                    st.pop();
                }
                st.pop();
                while(!q.empty()){
                    st.push(q.front());
                    q.pop();
                }
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};