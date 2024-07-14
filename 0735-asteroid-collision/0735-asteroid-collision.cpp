class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
            
            
            stack<int> st;
            for(int i : asteroids){
                if(st.empty() || st.top()<0 || i>0){
                    st.push(i);
                }
                else{
                    while(!st.empty() && st.top()>0){
                        if(st.top()==abs(i)){
                            st.pop();
                            break;
                        }
                        else if(st.top()<abs(i)){
                            st.pop();
                            if(st.empty()) st.push(i);
                            else if(st.top()<0) st.push(i);
                        }
                        else if(st.top()>abs(i)){
                            break;
                        }
                        else{
                            st.push(i);
                        }
                    }
                }
            }

        vector<int> ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;

    }
};