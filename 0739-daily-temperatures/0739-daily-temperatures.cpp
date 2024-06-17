//TLE for 1 test case
/*
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(temperatures[j]>temperatures[i]){
                    ans[i]=j-i;
                    break;
                }
            }
        }
        return ans;
    }
};
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top()-i;
            }

            st.push(i);

        }

        
        return ans;
    }
};
