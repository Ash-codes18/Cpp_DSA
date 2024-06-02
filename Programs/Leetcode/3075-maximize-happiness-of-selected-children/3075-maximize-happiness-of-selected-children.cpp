class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        int n = happiness.size();
        sort(happiness.begin(),happiness.end());

        int count = 0;

while(count<k){
        if(happiness[n-count-1] - count > 0){
            ans+=(happiness[n-count-1] - count);
        }  
        count++;
}

return ans;

    }
};