class Solution{
    
    private:
    
    
    bool isvalid(int x,int y, vector<vector<int>> m, int n, vector<vector<int>> visited ){
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> m,int n,vector<string>& ans,int x, int y, vector<vector<int>> visited,string path){
        
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        
        //Choices = D/L/R/U
        
        //down
        int newx=x+1;
        int newy=y;
        if(isvalid(newx,newy,m,n,visited)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        //left
        newx=x;
        newy=y-1;
        if(isvalid(newx,newy,m,n,visited)){
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        //right
        newx=x;
        newy=y+1;
        if(isvalid(newx,newy,m,n,visited)){
            path.push_back('R');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        //Up
        newx=x-1;
        newy=y;
        if(isvalid(newx,newy,m,n,visited)){
            path.push_back('U');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        visited[x][y]=0;
        
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string> ans;
        
        if(m[0][0]==0){
            return ans;
        }
        
        string path="";
        vector<vector<int>> visited=m;
        int x=0,y=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        solve(m,n,ans,x,y,visited,path);
        sort(ans.begin(),ans.end());

        return ans;        
        
        
    }
};