class Solution {
public:
    string makeFancyString(string s) {
        
        int n=s.length();
        int count=1;
        string ans;

        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                count=1;
            }

            else if(s[i]==s[i+1]){
                count++;
            }
            
            if(count>=3){
                continue;
            }

            ans.push_back(s[i]);

        }
return ans;
    }
};