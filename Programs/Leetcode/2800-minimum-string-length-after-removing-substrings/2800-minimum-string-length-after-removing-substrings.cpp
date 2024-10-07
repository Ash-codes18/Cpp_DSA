class Solution {
public:
    int minLength(string s) {
        int n = s.length();
        if(n<2) return n;

        stack<char> st;

        for(int i=0;i<n;i++){
            if(!st.empty()){
                string temp;
                temp.push_back(st.top());
                temp.push_back(s[i]);
                if(temp=="AB" || temp=="CD"){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }

        return st.size();
    }
};