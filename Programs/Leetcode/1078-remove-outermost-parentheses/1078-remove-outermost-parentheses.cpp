class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        stack<char> st;
        int count = 0;
        string ans;

        for(char c : s){

            if(c=='(') count++;
            if(c==')') count--;
            
            if(count==0 && !st.empty()){
                stack<char> temp;
                while(!st.empty()){
                    temp.push(st.top());
                    st.pop();
                }
                temp.pop();
                while(!temp.empty()){
                    ans.push_back(temp.top());
                    temp.pop();
                }
            }
            
            else st.push(c);
        }
        

        return ans;
    }
};