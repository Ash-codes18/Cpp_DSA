class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n < 2) return intervals;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]); 

        for(int i=1;i<n;i++){
            if(intervals[i][0] <= merged.back()[1]){
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
            else{
               merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};
