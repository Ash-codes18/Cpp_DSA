class Solution {
public:

    int getmax(vector<int> arr, int n){
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }

        return max;
    }


    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes;
        int start=0;
        int n=gain.size();
        altitudes.push_back(0);


        for(int i=0;i<n;i++){
            start+=gain[i];
            altitudes.push_back(start);
        }

        int ans=getmax(altitudes,n+1);
        return ans;
    }
};