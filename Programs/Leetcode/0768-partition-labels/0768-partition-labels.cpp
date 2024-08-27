class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        unordered_map<char,int> mp;
        unordered_map<char,bool> present;
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }

        vector<int> ans;

        int enc = 0;
        int zeroind = 0;
        for(int i=0;i<n;i++){
            if(i!=0 && enc==0){
                ans.push_back(i-zeroind);
                zeroind = i;
            }
            // cout<<enc<<" ";
            if(present[s[i]]==0){
                present[s[i]]=1;
                enc++;
            }

            if(i==mp[s[i]]) enc--;
        }

        ans.push_back(n-zeroind);

        return ans;
    }
};