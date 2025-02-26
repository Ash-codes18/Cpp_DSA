class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums, int pos = 0, int neg = 0, int ans = 0) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        for(int &i : nums){        
            pos+i < 0 ? pos = 0 : pos+=i;
            neg+i > 0 ? neg = 0 : neg+=i;
            ans = max(ans,max(pos,abs(neg)));
        }
        
        return ans;
    }
};
