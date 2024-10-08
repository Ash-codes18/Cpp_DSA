class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& arr) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        vector<int> indeg(n);
        vector<vector<int>> graph(n);

        for(int i=0;i<arr.size();i++){
            indeg[arr[i][1]]++;
            graph[arr[i][0]].push_back(arr[i][1]);
        }

        queue<int> q;

        for(int i=0;i<n;i++){
            if(indeg[i]==0) q.push(i);
        }

        vector<int> topo;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            topo.push_back(node);

            for(int &i : graph[node]){
                indeg[i]--;
                if(indeg[i]==0) q.push(i);
            }
        }

        if(topo.size()!=n) return {};

        reverse(topo.begin(),topo.end());
        return topo;
    }
};