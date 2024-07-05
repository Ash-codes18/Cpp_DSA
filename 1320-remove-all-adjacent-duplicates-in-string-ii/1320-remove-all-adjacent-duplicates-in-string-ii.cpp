class Solution {
public:
    string removeDuplicates(string s, int k) {
       
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        int n = s.length();
        stack<int> st;
        int i = 0, count = 1;

        while(i<n-1){
            if(i==0 || s[i-1]!=s[i] && i!=st.top()){
                count = 1;
                st.push(i);
            }
            if(s[i]==s[i+1]){
                count++;
            }
            if(count==k){
                s.erase(s.begin()+st.top(),s.begin()+st.top()+k);
                st.pop();
                i=st.top()-1; // since we are doing i++ below
                count = 1;
                n-=k;
            }
            i++;
        }

    return s;

    }
};