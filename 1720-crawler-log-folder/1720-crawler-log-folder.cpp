class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int ans = 0;
        
        for(string i : logs){
            if(i=="../"){
                if(ans>0) ans--;
            }
            else if(i!="./") ans++;
        } 

    return ans;

    }
};