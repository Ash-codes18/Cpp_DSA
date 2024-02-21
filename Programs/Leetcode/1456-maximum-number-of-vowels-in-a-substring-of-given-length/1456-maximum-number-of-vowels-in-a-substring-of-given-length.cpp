//TLE for 4 test cases


/*
class Solution {

private:
    int getVowel(string s){
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        return count;
    }

public:
    int maxVowels(string s, int k) {
        int ans=0;
        int count=0;
        int n=s.length();
        string a;

        for(int i=0;i<n;i++){
            if(i+k<=n){
                a=s.substr(i,k);
            }
            count=(getVowel(a));
            ans=max(count,ans);
        }

        return ans;
    }
};

*/


class Solution {

public:
    int maxVowels(string s, int k) {
        int ans;
        int count=0;
        int m=0,j=k;
        int n=s.length();

        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }   
        }

        if(count==k){
            return count;
        }

        ans=count;

        while(j<n){
            if(s[m]=='a' || s[m]=='e' || s[m]=='i' || s[m]=='o' || s[m]=='u'){
                count--;
            }   
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }  

            m++;
            j++;

            ans=max(count,ans);
        }

return ans;
    }
};