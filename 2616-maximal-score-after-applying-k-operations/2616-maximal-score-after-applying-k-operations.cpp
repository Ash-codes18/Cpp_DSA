class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        priority_queue<int> pq;
        for(int &i : nums) pq.push(i);

        long long ans = 0;

        while(k--){
            double ele = pq.top();
            pq.pop();
            ans+=ele;
            ele=ceil(ele/3.0);
            pq.push(ele);
        }

        return ans;
    }   
};