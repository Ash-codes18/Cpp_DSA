class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> psum(n);
        int count = 0;

        for(int i=0;i<n;i++){
            (i-1>=0)?psum[i]=nums[i]+psum[i-1] :  psum[i]=nums[i];
        }


        for(int i=0;i<n-1;i++){
            if(psum[i]>=psum[n-1]-psum[i]){
                count++;
            }
        }
        
    ios::sync_with_stdio(0);
    cin.tie(0);

    return count;

    }
};