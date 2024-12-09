class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        vector<vector<pair<int,int>>> graph(n+1);
        for(auto &i : times){
            graph[i[0]].push_back({i[1],i[2]});
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});

        vector<int> dist(n+1,INT_MAX);
        dist[k] = 0;


        while(!pq.empty()){
            int node = pq.top().second;
            int d = pq.top().first;

            pq.pop();

            for(auto &i : graph[node]){
                if(dist[i.first]>d+i.second){
                    dist[i.first] = d+i.second;
                    pq.push({d+i.second,i.first});
                }
            }

        }

        int ans = INT_MIN;
        for(int i=1;i<=n;i++) ans = max(ans,dist[i]);

        if(ans==INT_MAX) return -1;
        return ans;
    }
};