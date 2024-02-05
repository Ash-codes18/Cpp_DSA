// Approach-1 -> MLE

/*
class Solution {
public:



bool subsq(string s, string output, int ind,string sub) {
    if (ind >= s.length()) {
        return output==sub;
    }

    if(subsq(s, output, ind + 1, sub)){
        return true;
    }
    
    return subsq(s, output + s[ind], ind + 1, sub);
  
}


    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();

        if(n>m){
            return false;
        }

        string output;
        int ind=0;

        return subsq(t,output,ind,s);

    }
};

*/


// Approach-2 -> failed

/*

class Solution {
public:


    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();

        int a[26]={0};
        int b[26]={0};


        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }

        for(int i=0;i<m;i++){
            b[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(a[i]>b[i]){
                return false;
            }
        }
return true;

    }
};
*/


// Approach-3 -> two pointers


class Solution {
public:


    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int j=n-1;


        for(int i=m-1;i>=0 && j>=0;i--){
            if(s[j]==t[i]){
                j--;
            }
        }

return j<0;

    }
};


