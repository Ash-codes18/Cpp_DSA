//Approach-1 TC-> O(n), n = length of longest string

/*
class Solution {

private:
    int getmax(int n, int m, int p){
        if(n>=m && n>=p){
            return n;
        }
        else if(m>=n && m>=p){
            return m;
        }
        else{
            return p;
        }
    }

public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n =s1.length();
        int m =s2.length();
        int p =s3.length();

        if(s1[0]!=s2[0] || s1[0]!=s3[0]){
            return -1;
        }

        int count=0;
        int max=getmax(n,m,p);


        for(int i=0;i<max;i++){
             if(s1==s2 && s1==s3){
                break;
            }
            else if(s1!=s2){
                if(s1.length()==s2.length()){
                    s1.pop_back();
                    s2.pop_back();
                    count+=2;
                }
                else{
                    (s1.length()>s2.length())?s1.pop_back():s2.pop_back();
                    count++;
                }
            }
            if(s1!=s3){
                if(s1.length()==s3.length()){
                    s1.pop_back();
                    s3.pop_back();
                    count+=2;
                }
                else{
                    (s1.length()>s3.length())?s1.pop_back():s3.pop_back();
                    count++;
                }
            }
            if(s2!=s3){
                if(s3.length()==s2.length()){
                    s3.pop_back();
                    s2.pop_back();
                    count+=2;
                }
                else{
                    (s3.length()>s2.length())?s3.pop_back():s2.pop_back();
                    count++;
                }
            }

        }


return count;


    }
};
*/


// Approach-2 


class Solution {

private:

    int getmin(int n, int m, int p){
        if(n<=m && n<=p){
            return n;
        }
        else if(m<=n && m<=p){
            return m;
        }
        else{
            return p;
        }
    }


public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n =s1.length();
        int m =s2.length();
        int p =s3.length();

        if(s1[0]!=s2[0] || s1[0]!=s3[0]){
            return -1;
        }

        int count=0;
        int min=getmin(n,m,p);

        for(int i=0;i<min;i++){
            if(s1[i]==s2[i] && s1[i]==s3[i]){
                count++;
            }
            else{
                break;
            }
        }

//Total length of all the strings - No. of equal characters in the strings
        int ans=s1.length()+s2.length()+s3.length()-(3*count);

return ans;

    }
};