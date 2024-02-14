class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int *arr1 = new int[n/2];
        int *arr2 = new int[n/2];
        int ind1=0,ind2=0;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                arr1[ind1++]=nums[i];
            }
            else{
                arr2[ind2++]=nums[i];
            }
        }

        int i=0,j=0,m=0;
    
        while(i<ind1 && j<ind2){
            nums[m++]=arr2[j++];
            nums[m++]=arr1[i++];
        }

        return nums;

    }
};