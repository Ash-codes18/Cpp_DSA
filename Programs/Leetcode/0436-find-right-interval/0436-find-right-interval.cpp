class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ans(n,-1);

        for(int i=0;i<n;i++){
            int diff = INT_MAX;
            for(int j=0;j<n;j++){
                if(intervals[i][1]<=intervals[j][0]){
                    if(diff>abs(intervals[i][1]-intervals[j][0])){
                        ans[i]=j;
                        diff=abs(intervals[i][1]-intervals[j][0]);
                    }
                }
            }
        }

        return ans;

    }
};