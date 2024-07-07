class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        int n = s.length();
        string ans;
        
        for(int i=0;i<n;i++){
            ans.push_back(s[(i+k)%n]);
        }
        
        return ans;
    }
};