class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n = heights.size();
        long long sum = 0;
        long long ans = 0;

        vector<int> v=heights;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(j+1<n && v[j]<v[j+1]){
                    v[j+1]=v[j];
                }
            }
            for(int j=i;j>=0;j--){
                if(j-1>=0 && v[j]<v[j-1]){
                    v[j-1]=v[j];
                }
            }
            for(int i : v){
                sum+=i;
            }
            ans=max(sum,ans);
            sum=0;
            v=heights;
        }



    return ans;

    }
};