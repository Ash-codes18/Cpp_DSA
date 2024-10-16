class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> graph(n);
        int mod = 1e9+7;

        ios::sync_with_stdio(0);
        cin.tie(0);

        for(auto &i : roads){
            int v1 = i[0];
            int v2 = i[1];
            int dist = i[2];
            graph[v1].push_back({v2,dist});
            graph[v2].push_back({v1,dist});
        }

        vector<long long> dist(n,LLONG_MAX);
        dist[0] = 0;

        vector<int> ways(n,0);
        ways[0] = 1;

        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
        pq.push({0,0});

        while(!pq.empty()){
            int node = pq.top().second;
            long long d = pq.top().first;

            pq.pop();

            for(auto &i : graph[node]){
                int v = i.first;
                long long nw = i.second+d;

                if(dist[v]>nw){
                    dist[v] = nw;
                    pq.push({nw,v});
                    ways[v]=ways[node];
                    ways[v]%=mod;
                }
                else if(dist[v]==nw){
                    ways[v] += ways[node];
                    ways[v]%=mod;
                }
            }
        }


        return ways[n-1];

    }
};