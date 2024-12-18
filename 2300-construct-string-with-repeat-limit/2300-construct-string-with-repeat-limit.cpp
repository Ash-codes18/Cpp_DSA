#define F first
#define S second

class Solution {
public:
    string repeatLimitedString(string s, int r) {
        int n = s.length();
        priority_queue<pair<char,int>> pq;
        unordered_map<char,int> mp;
        string ans = "";

        for(char &c : s) mp[c]++;
        for(auto &i : mp) pq.push({i.F,i.S});

        while(!pq.empty()){
            auto[a,b] = pq.top();
            pq.pop();

            int useCount = min(b, r);
            ans += string(useCount, a);
            b -= useCount;

            if(b>0){
                if(pq.empty()) break;

                auto[p,q]=pq.top();
                pq.pop();

                ans+=p;
                q--;

                if(q>0) pq.push({p,q});
                pq.push({a, b});
            }
        }

        return ans;
    }
};