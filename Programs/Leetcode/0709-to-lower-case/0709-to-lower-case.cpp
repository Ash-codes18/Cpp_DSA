class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                ans.push_back(s[i]-'A'+'a');
            }
            else{
                ans.push_back(s[i]);
            }
        }
        

        return ans;
    }
};