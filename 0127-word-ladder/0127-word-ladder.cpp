class Solution {
private:
    vector<string> get(string s, int &pos, unordered_set<string> &st){
        vector<string> valid;

        for(int i=0;i<26;i++){
            s[pos] = i+'a';
            if(st.find(s)!=st.end()){
                valid.push_back(s);
                st.erase(s);
            }
        }

        return valid;
    }

public:
    int ladderLength(string s, string e, vector<string>& arr) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_set<string> st;
        for(string &i : arr) st.insert(i);

        queue<pair<string,int>> q;
        q.push({s,1});

        while(!q.empty()){
            string curr = q.front().first;
            int level = q.front().second;

            q.pop();

            for(int i=0;i<curr.length();i++){
                vector<string> valid = get(curr,i,st);
                for(string &i : valid){
                    if(i==e) return level+1;
                    q.push({i,level+1});
                }
            }
        }


        return 0;
    }
};