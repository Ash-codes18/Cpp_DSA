class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,bool> mp;
        int len = 0, ans = 0 , j = 0;


        for(int i=0;i<n;i++){
            if(!mp[s[i]]){
                mp[s[i]] = true;
                len++;
                ans=max(len,ans);
            }
            else{
                while(s[j]!=s[i]){
                    mp[s[j++]]=false;
                    len--;
                }
                j++;
            }
        }
        
return ans;

    }
};