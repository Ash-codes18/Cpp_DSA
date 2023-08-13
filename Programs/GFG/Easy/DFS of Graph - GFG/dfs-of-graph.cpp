//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
 
    void dfs(int vertex,vector<int>&vis,vector<int>&ans,vector<int>adj[]){
        vis[vertex]=true;
        ans.push_back(vertex);
        for(auto x:adj[vertex]){
            if(vis[x]==false) dfs(x,vis,ans,adj);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {

vector<int>vis(V+1,false);
vector<int>ans;
dfs(0,vis,ans,adj);
return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends