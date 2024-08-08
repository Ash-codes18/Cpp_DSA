class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int ans = 0;
        int t = threshold*k;

        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        
        if(sum>=t) ans++;
       
        int j = 0;
        for(int i=k;i<arr.size();i++,j++){
            sum-=arr[j];
            sum+=arr[i];
            if(sum>=t) ans++;
        }
        
        return ans;
    }
};