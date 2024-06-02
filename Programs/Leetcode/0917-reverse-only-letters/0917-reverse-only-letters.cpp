class Solution {
public:
    string reverseOnlyLetters(string s) {
        string temp;
        for(char c : s){
            if(isalpha(c)){
                temp.push_back(c);
            }
        }
        
        reverse(temp.begin(),temp.end());

        string ans;
        int n = s.length();
        int j =0;

        for(int i =0;i<n;i++){
            if(!isalpha(s[i])){
                ans.push_back(s[i]);
            }
            else{
                ans.push_back(temp[j++]);
            }
        }

        return ans;
    }
};