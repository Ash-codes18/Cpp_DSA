class Solution {
private:
    void getStr(vector<string> &str, int n){
        string ans;
        while(n>0){
            if(n%2==0) ans.push_back('0');
            else ans.push_back('1');
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        str.push_back(ans);
    }

    int getval(string &s){
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') ans+=pow(2,s.length()-i-1); 
        }
        return ans;
    }

    int ans(vector<string> &arr){
        int val = INT_MIN;
        sort(arr.begin(),arr.end());
        do{
            string s;
            for(string &i : arr) s+=i;
            int curr = getval(s);
            val = max(val,curr);
        } while(next_permutation(arr.begin(),arr.end()));

        return val;
    }

public:
    int maxGoodNumber(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
      
        vector<string> str;
        for(int &i : nums) getStr(str,i);
        return ans(str);
    }
};