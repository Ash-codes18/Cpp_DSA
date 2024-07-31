#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

// More Space


    // int adj[n+1][m+1];

    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }


// Less Space

    vector<vector<int>> adj(m+1);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    return 0;
}