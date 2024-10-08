class Solution {
private:
    bool bfs(int s, vector<vector<int>> &graph, vector<int> &colors){
        queue<int> q;

        q.push(s);
        colors[s]=0;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int &i : graph[node]){
                if(colors[i]==-1){
                    colors[i] = !colors[node]; 
                    q.push(i);
                }
                else if(colors[i]==colors[node]){
                    return false;
                }
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> colors(v,-1);

        ios::sync_with_stdio(0);
        cin.tie(0);
        
        for(int i=0;i<v;i++){
            if(colors[i]==-1){
                if(!bfs(i,graph,colors)) return false;
            }
        }

        return true;
    }
};