class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        vector<int> merged(n+m);

        double ans;

        int i=0,j=0,z=0;

        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                merged[z++]=nums2[j++];
            }
            else{
                merged[z++]=nums1[i++];
            }
        }

        while(i<n){
            merged[z++]=nums1[i++];
        }
        while(j<m){
            merged[z++]=nums2[j++];
        }

    if((n+m)%2==0){
        ans=((double)(merged[(n+m)/2]+merged[((n+m)/2)-1]))/2;
    }
    else{
        ans=(double)(merged[(n+m)/2]);
    }



return ans;
    }
};