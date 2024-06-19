class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.length();
        int m = s.length();

        int word_count = 0;
        map<char,string> mp1;
        map<string,char> mp2;
        string a;

        int j=0;

        for(int i=0;i<m;i++){
            if(i==m-1){
                a.push_back(s[i]);
                word_count++;
                mp1[pattern[j]]=a;
                mp2[a]=pattern[j++];
            }
            if(s[i]==' '){
                word_count++;
                mp1[pattern[j]]=a;
                mp2[a]=pattern[j++];
                a="";
            }
            else{
                a.push_back(s[i]);
            }
        }

        if(word_count<n || n<word_count){
            return false;
        }

        a="";
        j=0;


        for(int i=0;i<m;i++){
            if(i==m-1){
                a.push_back(s[i]);
                if(mp1[pattern[j]]!=a){
                   return false;
                }
                if(mp2[a]!=pattern[j++]){
                    return false;
                }
            }
            if(s[i]==' '){
                if(mp1[pattern[j]]!=a){
                   return false;
                }
                if(mp2[a]!=pattern[j++]){
                    return false;
                }
                a=""; 
            }
            else{
                a.push_back(s[i]);
            }
        }



return true;


    }
};