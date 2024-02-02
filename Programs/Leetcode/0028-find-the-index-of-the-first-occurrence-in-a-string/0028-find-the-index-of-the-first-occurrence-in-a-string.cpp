// Approach-1 -> BruteForce -> O(n^2)

/*
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int h=haystack.length();
        int n= needle.length();   


        for(int i=0;i<h-n+1;i++){
            int flag=1;
            for(int j=0;j<n;j++){
                if(haystack[i+j]!=needle[j]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }

        return -1;
        
    }
};
*/

// Approach-2 -> Two pointers -> O(n)


class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int h=haystack.length();
        int n= needle.length();   
        int hs=0;
        int ns=0;

        if(h<n){
            return -1;
        }

        while(ns<n && hs<h){
            if(haystack[hs]==needle[ns]){
                hs++;
                ns++;

            }
            else{
                hs=hs-ns+1;
                ns=0;
            }
        }


return (ns == n)?(hs - ns):-1;

        
    }
};

