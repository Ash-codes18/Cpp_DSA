class Solution {
public:
    string finalString(string s) {
        string ans;

        int i = 0;
        int n = s.length();

        while(i<n){
            if(s[i]=='i'){
                reverse(s.begin(),s.begin()+i);
            }
            i++;
        }

        for(char c : s){
            if(c!='i'){
                ans.push_back(c);
            }
        }

        return ans;


    }
};