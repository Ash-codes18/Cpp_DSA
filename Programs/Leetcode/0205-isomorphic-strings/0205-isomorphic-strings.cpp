// Approach-2 tle for last 6 test cases

/*
class Solution {
public:
    bool isIsomorphic(string s, string t) {


        int n=s.length();


        vector<vector<int>> sind;
        vector<vector<int>> tind;
        vector<int> temp1;
        vector<int> temp2;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]==s[j]){
                    temp1.push_back(j);
                }
                if(t[i]==t[j]){
                    temp2.push_back(j);
                }
            }
            sind.push_back(temp1);
            tind.push_back(temp2);
            temp1.clear();
            temp2.clear();
        }


        for(int i=0;i<sind.size();i++){
            if(sind[i]!=tind[i]){
                return false;
            }
        }
        
return true;

    }
};
*/


// Approach -3 


class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n=s.length();
        map<char,char> mp1;
        map<char,char> mp2;


        for(int i=0;i<n;i++){
            mp1[s[i]]=t[i];
        }

        for(int i=0;i<n;i++){
            mp2[t[i]]=s[i];
        }


        for(int i=0;i<n;i++){
            if(mp1[s[i]] != t[i]){
                return false;
            }
            if(mp2[t[i]]!=s[i]){
                return false;
            }
        }


        return true;

    }
};

