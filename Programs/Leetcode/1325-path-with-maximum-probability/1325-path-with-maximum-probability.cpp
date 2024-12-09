class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succ, int s, int e) {
        vector<vector<pair<int,double>>> graph(n);

        ios::sync_with_stdio(0);
        cin.tie(0);

        int size = edges.size();
        for(int i=0;i<size;i++){
            int v1 = edges[i][0];
            int v2 = edges[i][1];
            double p = succ[i];
            graph[v1].push_back({v2,p});
            graph[v2].push_back({v1,p});
        }


        priority_queue<pair<double,int>> pq;
        pq.push({1.0,s});

        vector<double> probs(n,0.0);
        probs[s] = 1.0;

        while(!pq.empty()){
            int node = pq.top().second;
            double prob = pq.top().first;

            pq.pop();

            for(auto &i : graph[node]){
                int v = i.first;
                double p = i.second;


                if(probs[v]<prob*p){
                    probs[v] = prob*p;
                    pq.push({prob*p,v});
                } 
            }
        }

        return probs[e];
    }
};