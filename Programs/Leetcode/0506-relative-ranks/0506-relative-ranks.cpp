class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<int> temp = score;
        sort(temp.begin(),temp.end());

        map<int,int> mp;
        int ranks = n;

        for(int i : temp){
            mp[i]=ranks--;
        }

        vector<string> ans;

        for(int i : score){
            if(mp[i]==1){
                ans.push_back("Gold Medal");
            }
            else if(mp[i]==2){
                ans.push_back("Silver Medal");
            }
            else if(mp[i]==3){
                ans.push_back("Bronze Medal");
            }
            else{
                ans.push_back(to_string(mp[i]));
            }
        }

return ans;

    }
};