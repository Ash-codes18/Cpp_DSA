// Approach-1 : O(n^2) -> TLE after 54 TC's

/*
class Solution {
public:
    int maxArea(vector<int>& height) {
          int max=0;
          int n=height.size();
            
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int heigh= min(height[i],height[j]);
            int width= j-i;
            int area= heigh*width;
            if (area >max){
                max=area;
            }
        }
    }
return max;
    }
};
*/


class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int s=0;
        int e=n-1;
        int area=0;


        while(s<e){
            int current=min(height[s],height[e])*(e-s);

            if(area<current){
                area=current;
            }

            if(height[s]<height[e]){
                s++;
            }

            else{
                e--;
            }

        }


return area;
        

    }
};