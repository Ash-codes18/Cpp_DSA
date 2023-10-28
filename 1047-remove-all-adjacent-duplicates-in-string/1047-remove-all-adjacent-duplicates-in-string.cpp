//Approach 1 - failing 2 test cases : memory limit

/*
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                s.erase(s.begin()+i,s.begin()+i+2);
                return removeDuplicates(s);
            }
        }
        return s;
    }
};
 */


//  Approach-2


class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        int i=0;
        while(i<n){
            if(s[i]==s[i+1]){
                s.erase(s.begin()+i,s.begin()+i+2);
                n-=2;
                i=0;       
            }
            else{
                i++;
            }
        }


        return s;
    }
};