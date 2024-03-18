class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());

        int count=1;

        // for(auto i:points){
        //     for(int j: i){
        //         cout<<j<<" ";
        //     }
        //         cout<<" ";
        // }

        int end = points[0][1];
        int i=1;

        while(i<n){
            if(points[i][0]>end){
                count++;
                end=points[i][1];
            }
            else{
                end=min(end,points[i][1]);
            }
            i++;
        }

return count;

    }
};