class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check;
        int n=words.size();


        for(int i=0;i<n;i++){
            check+=words[i];

            if(check==s){
                return true;
            }

            if(check.length()>s.length()){
                return false;
            }


        }

return false;


    }
};