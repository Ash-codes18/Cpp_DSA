class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<vector<int>> v(26,vector<int>(n));
        vector<string> ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                v[words[i][j]-'a'][i]++;
            }
        }

        int ind = 0; 

        for(auto i : v){
            int min = INT_MAX;
            for(int j : i){
                if(j<min){
                    min = j;
                }
            }
            while(min--){
                string s;
                s+=(ind+'a'); 
                ans.push_back(s);
            }
            ind++;
        }


return ans;

    }
};