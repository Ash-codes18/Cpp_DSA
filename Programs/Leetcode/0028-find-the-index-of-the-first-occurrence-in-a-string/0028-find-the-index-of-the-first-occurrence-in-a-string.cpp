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