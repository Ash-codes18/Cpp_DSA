// Approach -1 Using bfs

/*
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
        
        for(int i=0;i<v;i++){
            if(colors[i]==-1){
                if(!bfs(i,graph,colors)) return false;
            }
        }

        return true;
    }
};

*/

// Approach -2 Using DFS

class Solution {
private:
    bool dfs(int s, int curr, vector<int> &colors, vector<vector<int>> &graph){
        colors[s] = curr;

        for(int &i : graph[s]){
            if(colors[i]==-1){
                if(!dfs(i,!curr,colors,graph)) return false;
            }
            else if(colors[i]==curr) return false;
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> colors(v,-1);

        for(int i=0;i<v;i++){
            if(colors[i]==-1){
                if(!dfs(i,0,colors,graph)) return false;
            }
        }

        return true;
    }
};