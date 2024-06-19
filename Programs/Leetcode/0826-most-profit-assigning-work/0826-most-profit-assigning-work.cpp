class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int w = worker.size();
        int n = profit.size();

        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[difficulty[i]] = max(profit[i],mp[difficulty[i]]);
        }

        sort(difficulty.begin(),difficulty.end());
        sort(worker.begin(),worker.end());

        int ans = 0;
        int j = 0;
        int cp = 0;

        for(int i=0;i<w;i++){
            while(j<n && worker[i] >= difficulty[j]){
                cp = max(cp,mp[difficulty[j]]);
                j++;
            }
                ans+=cp;
        }

    return ans;


    }
};