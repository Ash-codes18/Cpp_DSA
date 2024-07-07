class Solution {
public:
    bool canConstruct(string a, string b) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        map<char,int> r;
        map<char,int> m;
        for(char i : a) r[i]++;
        for(char i : b) m[i]++;
        for(auto i : r) if(i.second>m[i.first]) return false;
        return true;
    }
};