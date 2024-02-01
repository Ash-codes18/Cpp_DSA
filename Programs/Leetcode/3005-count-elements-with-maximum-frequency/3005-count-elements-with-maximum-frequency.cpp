class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int arr[101]={0};
        int maxfreq=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>maxfreq){
                maxfreq=arr[nums[i]];
            }
        }

        int count=0;
        for(int i=0;i<101;i++){
            if(maxfreq==arr[i]){
                count+=maxfreq;
            }
        }

return count;

    }
};