class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n,m;
        n=s1.length();
        m=s2.length();

        int c1[26]={0};
        int c2[26]={0};

        for(int i=0;i<n;i++){
            c1[s1[i]-'a']++;
        }

        for(int i=0;i<m;i++){
            c2[s2[i]-'a']++;

        if(i>=n){
            c2[s2[i-n]-'a']--;
        }

        if(equal(c1,c1+26,c2)){
            return true;
        }
        
        }


    return false;


    }
};