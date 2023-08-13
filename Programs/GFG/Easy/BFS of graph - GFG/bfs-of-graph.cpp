//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // The vector to store the BFS traversal result.
        vector<int> bfsTraversal;
        
        // Create a boolean array to keep track of visited vertices.
        vector<bool> visited(V, false);
        
        // Create a queue for BFS.
        queue<int> q;
        
        // Start BFS from the first vertex (vertex 0).
        q.push(0);
        visited[0] = true;
        
        while (!q.empty()) {
            // Get the front vertex from the queue.
            int currentVertex = q.front();
            q.pop();
            
            // Add the current vertex to the BFS traversal result.
            bfsTraversal.push_back(currentVertex);
            
            // Traverse all adjacent vertices of the current vertex.
            for (int adjVertex : adj[currentVertex]) {
                // If the adjacent vertex is not visited, mark it as visited and enqueue it.
                if (!visited[adjVertex]) {
                    visited[adjVertex] = true;
                    q.push(adjVertex);
                }
            }
        }
        
        return bfsTraversal;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends