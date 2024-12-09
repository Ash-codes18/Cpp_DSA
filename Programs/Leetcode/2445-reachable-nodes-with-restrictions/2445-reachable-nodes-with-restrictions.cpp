class Solution {
private:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &graph, int &num){
        vis[node] = 1;
        num++;

        for(int &i : graph[node]){
            if(!vis[i]) dfs(i,vis,graph,num);
        }
    }

public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& r) {
        vector<vector<int>> graph(n);

        for(auto &i : edges){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }

        vector<int> vis(n);
        for(int i=0;i<r.size();i++){
            vis[r[i]]=1;
        }


        int num = 0;
        dfs(0,vis,graph,num);

        return num;
    }
};