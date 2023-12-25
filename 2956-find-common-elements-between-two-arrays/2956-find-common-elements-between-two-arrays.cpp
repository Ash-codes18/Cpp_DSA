class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();

        vector<int> ans(2,0);
        unordered_set<int> temp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    temp.insert(nums1[i]);
                    break;
                }
            }
        }

        for(auto val:temp){

            for(int i=0;i<n;i++){
                if(val==nums1[i]){
                    ans[0]++;
                }
            }

            for(int j=0;j<m;j++){
                if(val==nums2[j]){
                    ans[1]++;
                }
            }
        }


return ans;


    }
};