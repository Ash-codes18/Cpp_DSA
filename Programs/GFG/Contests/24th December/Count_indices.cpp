class Solution {
  public:
    int countIndices(int n, vector<int> &arr) {
        // code here
        vector<int> brr=arr;
        sort(brr.begin(),brr.end());
        int count=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
                count++;
            }
        }
        
        return count;
    }
};