class Solution {
private:
    void dfs(int n, int &k, string temp, string &ans){
        if(!ans.empty()) return;
        
        if(n==0){
            k--;
            if(k==0) ans = temp;
            return;
        }

        for(char i='a';i<='c';i++){
            if(temp.empty() || temp.back()!=i){
                dfs(n-1,k,temp+i,ans);
            }
        }
    }

public:
    string getHappyString(int n, int k) {
        string ans;
        dfs(n,k,"",ans);
        return ans;
    }
};