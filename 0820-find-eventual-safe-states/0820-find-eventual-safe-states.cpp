//every node that has a cycle will not be a safe node
// every node that is connected to any node with a cycle will not be a safe node
// The remaining nodes will be safe

class Solution {
private:
    bool dfs(int node, vector<int> &vis, vector<int> &path, vector<vector<int>> &graph, vector<int> &valid){
        vis[node] = 1;
        path[node] = 1;

        for(int &i : graph[node]){
            if(!valid[i]) valid[node] = 0;
            if(!vis[i]){
                if(dfs(i,vis,path,graph,valid)) return true;
            }
            else if(path[i]) return true;
        }

        path[node] = 0;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> vis(v);
        vector<int> path(v);
        vector<int> valid(v,1);

        ios::sync_with_stdio(0);
        cin.tie(0);

        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i,vis,path,graph,valid)) valid[i]=0;
            }
            else if(path[i]) valid[i] = 0; 
        }

        vector<int> ans;

        for(int i=0;i<v;i++){
            if(valid[i]) ans.push_back(i);
        }

        return ans;
    }
};