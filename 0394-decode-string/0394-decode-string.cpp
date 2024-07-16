class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<char> st;
        stack<int> nums;

        for(int i=0;i<n;i++){
            if(s[i]==']'){
                string str;
                while(!st.empty() && st.top()!='['){
                    str.push_back(st.top());
                    st.pop();
                }
                if(!st.empty()) st.pop();
                int n = nums.top();
                nums.pop();
                reverse(str.begin(),str.end());
                for(int i=0;i<n;i++){
                    for(int j=0;j<str.size();j++){
                        st.push(str[j]);
                    }
                }
            }
            else if(isdigit(s[i])){
                string temp;
                while(i<n && isdigit(s[i])){
                    temp+=s[i++];
                }
                i--;
                nums.push(stoi(temp));
            }
            else{
                st.push(s[i]);
            }
        }

        string ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        

        reverse(ans.begin(),ans.end());
        return ans;

    }
};