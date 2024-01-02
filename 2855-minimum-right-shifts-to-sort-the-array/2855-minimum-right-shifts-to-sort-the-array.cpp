class Solution {
public:

    void shift(vector<int> &arr, int n){
        int temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }


    int minimumRightShifts(vector<int>& nums) {
        
        vector<int> checker=nums;
        sort(checker.begin(),checker.end());

        int n=nums.size();


        if(nums==checker){
            return 0;
        }

        int count=0;

        while(nums!=checker){
            if(count>nums.size()){
                return -1;
            }
            shift(nums,n);
            count++;
        }

return count;

    }
};