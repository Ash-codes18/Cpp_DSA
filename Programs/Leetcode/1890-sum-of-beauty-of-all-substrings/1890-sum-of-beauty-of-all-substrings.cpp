class Solution {
public:
    int beautySum(string s) {

        int n = s.length();
        int sum = 0;

        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
                int maxi = INT_MIN;
                int mini = INT_MAX;
                mp[s[j]]++;
                for(auto &i : mp){
                    if(i.second>maxi) maxi=i.second;
                    if(i.second<mini) mini=i.second;
                }
                sum+=(maxi-mini);
            }

        }

        return sum;

    }
};