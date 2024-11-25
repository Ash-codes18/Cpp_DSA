class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        int n = s.length();
        int x = n/k;

        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<string,int> mp;
        string temp;
        
        for(int i=0;i<n;i++){
            temp.push_back(s[i]);
            if((i+1)%x==0){
                mp[temp]++;
                temp = "";
            }
        }

        for(int i=0;i<n;i++){
            temp.push_back(t[i]);
            if((i+1)%x==0){
                if(mp[temp]==0) return false;
                else mp[temp]--;
                temp = "";
            }
        }

        return true;
    }
};