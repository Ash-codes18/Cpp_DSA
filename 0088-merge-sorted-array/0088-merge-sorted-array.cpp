class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int z=m;
        for(int i=0;i<n;i++){
            if(z<n+m){
                nums1[z]=nums2[i];
                z++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};