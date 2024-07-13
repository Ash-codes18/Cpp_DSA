class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);

        int n = positions.size();
        vector<vector<int>> ele;
        stack<vector<int>> st;
        vector<int> ans;


        for(int i=0;i<n;i++){
            ele.push_back({positions[i],healths[i],directions[i],i});
        }

        sort(ele.begin(),ele.end());

        for(auto i : ele){
            if(st.empty() || st.top()[2]=='L' || i[2]=='R'){
                st.push(i);
            }
            else if(i[2]=='L'){
                bool add = true;
                while(!st.empty() && st.top()[2]=='R' && add){
                    int h = st.top()[1];
                    if(i[1]>h){
                        st.pop();
                        i[1]-=1;
                    }
                    else if(i[1]<h){
                        st.top()[1]--;
                        add = false;
                    }
                    else{
                        st.pop();
                        add = false;
                    }
                }

                if(add){
                    st.push(i);
                }
            }
        }
        

        ele.clear();
        while(!st.empty()){
            ele.push_back(st.top());
            st.pop();
        }

        for(auto &i : ele){
            swap(i[0],i[3]);
        }

        sort(ele.begin(),ele.end());


        for(auto i : ele){
            ans.push_back(i[1]);
        }


        return ans;

    }
};