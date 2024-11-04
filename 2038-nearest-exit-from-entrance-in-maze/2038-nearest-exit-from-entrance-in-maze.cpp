//getting tle with dfs

/*
class Solution {
private:
    void dfs(int row, int col, vector<int> &s, vector<vector<char>> &grid, int &ans, int temp){
        int n = grid.size();
        int m = grid[0].size();
        grid[row][col] = '+';

        if(temp>ans){
            grid[row][col] = '.';
            return;
        }
        
        if((row==n-1 || col==m-1 || row==0 || col==0) && temp>0) ans = min(ans,temp);
        
        int dx[] = {0,0,-1,1};
        int dy[] = {-1,1,0,0};

        for(int i=0;i<4;i++){
            int nrow = row+dx[i];
            int ncol = col+dy[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]!='+'){
                dfs(nrow,ncol,s,grid,ans,temp+1);
            }
        }

        grid[row][col] = '.';
    }

public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& s) {
        int n = maze.size();
        int m = maze[0].size();

        int ans = INT_MAX;

        dfs(s[0],s[1],s,maze,ans,0);

        if(ans==INT_MAX || ans==0) return -1;
        return ans;
    }
};
*/


class Pair{
public:
    int a,b,c;
    Pair(int p, int q, int r){
        a=p;
        b=q;
        c=r;
    }
};


class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& s) {
        int n = maze.size();
        int m = maze[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        queue<Pair> q;
        q.push(Pair(s[0],s[1],0));
        maze[s[0]][s[1]] = '+';

        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};

        while(!q.empty()){
            int row = q.front().a;
            int col = q.front().b;
            int dist = q.front().c;

            q.pop();

            if(dist>0 && (row==0 || row==n-1 || col==0 || col==m-1)) return dist;

            for(int i=0;i<4;i++){
                int nrow = row+dx[i];
                int ncol = col+dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && maze[nrow][ncol]!='+'){
                    q.push(Pair(nrow,ncol,dist+1));
                    maze[nrow][ncol] = '+';
                }
            }
        }

        return -1 ;
    }
};
