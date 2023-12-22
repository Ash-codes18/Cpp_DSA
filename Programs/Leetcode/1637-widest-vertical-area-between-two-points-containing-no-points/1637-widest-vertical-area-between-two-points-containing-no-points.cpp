class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        //  Blue Bada fir Red Bada
        //  fir Blue chota fir Red chota

        int n=points.size();
        sort(points.begin(),points.end());

        if(n==2){
            if(points[0][1]==points[1][1]){
                return 0;
            }
            else{
                return abs(points[0][0]-points[1][0]);
            }
        }

        int max=INT_MIN;

        for(int i=0;i<n-1;i++){
                if(points[i][1]!=points[i+1][1] && abs(points[i][0]-points[i+1][0])>max){
                    max=abs(points[i][0]-points[i+1][0]);
                }
        
        }

        if(max==INT_MIN){
            return 0;
        }

return max;

    }
};