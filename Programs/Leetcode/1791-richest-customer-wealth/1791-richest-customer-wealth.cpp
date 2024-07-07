class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int sum = 0;

        for(auto i : a){
            int temp = 0;
            for(int j : i){
                temp+=j;
            }
            sum=max(temp,sum);
        }
    
    return sum;
    
    }
};