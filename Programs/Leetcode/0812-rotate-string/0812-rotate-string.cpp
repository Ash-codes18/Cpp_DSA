class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        s+=s;

        int j = 0;

        for(int i=0;i<s.length();i++){
            if(j==goal.length()) return true;
            if(goal[j]==s[i]) j++;
            else if(goal[j]!=s[i] && j>0) j=0, i--;
        }

        return false;
    }
};