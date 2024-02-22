class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool> trusts(n+1,false);
        vector<int> trustcount(n+1,0);
        trusts[0]=true;

        for(int i=0;i<trust.size();i++){
            trusts[trust[i][0]]=true;
        }

        for(int i=0;i<trust.size();i++){
            trustcount[trust[i][1]]++;
        }


        for(int i=0;i<n+1;i++){
            if(trusts[i]==false && trustcount[i]==n-1){
                return i;
            }
        }

return -1;

    }
};