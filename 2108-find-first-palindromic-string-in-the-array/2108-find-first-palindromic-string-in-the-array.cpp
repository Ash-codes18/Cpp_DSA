class Solution {

private:
    bool ispalin(string s){
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t){
            return true;
        }
        return false;
    }

public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();

        for(int i=0;i<n;i++){
            if(ispalin(words[i])){
                return words[i];
            }
        }
return "";
    }
};