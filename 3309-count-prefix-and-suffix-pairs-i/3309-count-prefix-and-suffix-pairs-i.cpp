class Solution {
private:
    bool Suf(string &a, string &b){
        int n = a.length();
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

    bool Pre(string &a, string &b){
        int n = a.length();
        int m = b.length();
        for(int i=0;i<n;i++){
            if(a[n-i-1]!=b[m-i-1]) return false;
        }
        return true;
    }

public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;

        for(int i=0;i<n-1;i++){
            string a = words[i];
            for(int j=i+1;j<n;j++){
                string b = words[j];
                if(b.length()>=a.length())
                if(Suf(a,b) && Pre(a,b)) ans++;
            }
        }

        return ans;
    }
};