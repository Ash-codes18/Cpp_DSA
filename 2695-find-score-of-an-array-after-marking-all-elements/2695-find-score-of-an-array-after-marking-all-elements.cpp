class comp{
public:
    bool operator()(pair<int,int> &a, pair<int,int> &b){
        if(a.first>b.first) return true;
        
        else if(a.first == b.first) return a.second>b.second;

        return false;
    }
};

class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        priority_queue<pair<int,int>, vector<pair<int,int>>, comp> pq;
        unordered_set<int> st;

        for(int i=0;i<n;i++) pq.push({nums[i],i});

        while(st.size()!=n){
            auto [ele,ind] = pq.top();
            pq.pop();
            if(st.find(ind)==st.end()){
                ans+=ele;
                st.insert(ind);
                if(ind-1>=0) st.insert(ind-1);
                if(ind+1<n) st.insert(ind+1);
            }
        }

        return ans;
    }
};