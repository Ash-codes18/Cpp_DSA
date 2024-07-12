class Solution {

private:
    string helper(string s, string toremove, int &ans, int val){

            stack<char> st;
            char first = toremove[0];
            char second = toremove[1];

            for(char i : s){
                if(!st.empty() && st.top()==first && i==second){
                    st.pop();
                    ans+=val;
                }
                else st.push(i);
            }

            string left;

            while(!st.empty()){
                left.push_back(st.top());
                st.pop();
            }

            reverse(left.begin(),left.end());
            return left;
    }


public:
    int maximumGain(string s, int x, int y) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);

        int n = s.length();
        int ans = 0;

        if(x>y){
            s = helper(s,"ab",ans,x);
            s = helper(s,"ba",ans,y);
        }

        else{
            s = helper(s,"ba",ans,y);
            s = helper(s,"ab",ans,x);
        }

return ans;

    }
};