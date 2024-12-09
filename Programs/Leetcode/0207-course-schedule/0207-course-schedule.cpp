// Approach - 1 : Using BFS

// class Solution {
// public:
//     bool canFinish(int n, vector<vector<int>>& arr) {
//         vector<int> indeg(n);
//         vector<vector<int>> graph(n);

//         for(int i=0;i<arr.size();i++){
//             indeg[arr[i][1]]++;
//             graph[arr[i][0]].push_back(arr[i][1]);
//         }

//         queue<int> q;

//         for(int i=0;i<n;i++){
//             if(indeg[i]==0) q.push(i);
//         }

//         vector<int> topo;

//         while(!q.empty()){
//             int node = q.front();
//             q.pop();

//             topo.push_back(node);

//             for(int &i : graph[node]){
//                 indeg[i]--;
//                 if(indeg[i]==0) q.push(i);
//             }
//         }

//         return topo.size()==n;
//     }
// };


//Approach - 2 : Using DFS

class Solution {
private:
    bool dfs(int node, vector<int> &vis, vector<int> &path, vector<vector<int>> &graph){
        int n = graph.size();
        vis[node] = 1;
        path[node] = 1;

        for(int &i : graph[node]){
            if(!vis[i]){
                if(dfs(i,vis,path,graph)) return true;
            }
            else if(path[i]) return true;
        }


        path[node] = 0;
        return false;
    }


public:
    bool canFinish(int n, vector<vector<int>>& arr) {
        vector<vector<int>> graph(n);

        ios::sync_with_stdio(0);
        cin.tie(0);

        for(int i=0;i<arr.size();i++){
            graph[arr[i][0]].push_back(arr[i][1]);
        }

        vector<int> vis(n);
        vector<int> path(n);

        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,vis,path,graph)) return false;
            }
            if(path[i]) return false;
        }

        return true;
    }
};