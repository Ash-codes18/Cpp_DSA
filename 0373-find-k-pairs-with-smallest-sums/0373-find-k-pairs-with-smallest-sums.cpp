class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& A, vector<int>& B, int C) {
        int n = A.size();
        int m = B.size();

        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int,int>>>> pq;
        
        for(int i=0;i<min(n,C);i++){
            pq.push({A[i]+B[0],{i, 0}});
        }
        
        while(C-- && !pq.empty()){
            auto[sum,ind] = pq.top();
            pq.pop();
            
            int i = ind.first, j = ind.second;
            ans.push_back({A[i], B[j]});
            
            if(j+1<m){
                pq.push({A[i]+B[j+1], {i, j+1}});
            }
        }
        
        return ans;
    }
};
