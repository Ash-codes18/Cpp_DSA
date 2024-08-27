class Solution {
private:
    int get(string s){
        int n = s.length();
        int val = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') val+=pow(2,n-i-1);
        }
        return val;
    }

    string setter(int n){
        string s;
        if(n==0){
            s.push_back('0');
            return s;
        }
        while(n>0){
            s.push_back((n%2) + '0');
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }

public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_map<int,bool> mp;
        int len = nums[0].length();
        for(string i : nums){
            mp[get(i)] = true;
        }

        int hi = pow(2,len);

        for(int i=hi-1;i>=0;i--){
            if(mp[i]==false){
                string val = setter(i);
                int zeros = len - val.length();
                string ans;
                while(zeros--){
                    ans.push_back('0');
                }
                ans+=val;
                return ans;
            }
        }

        return "";
    }
};