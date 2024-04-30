class Solution {

private:

    int getSetBits(int a){
        int count = 0;
        while(a>0){
            if(a%2==1){
                count++;
            }
            a/=2;
        }
        return count;
    }


public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(0);
        vector<int> done = nums;
        sort(done.begin(),done.end());

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                    if(getSetBits(nums[j])==getSetBits(nums[j+1])){
                        if(nums[j]>nums[j+1]){
                        swap(nums[j],nums[j+1]);
                    }
                }
            }
        }

        for(int i : nums){
            cout<<i<<" ";
        }

        if(nums==done){
            return true;
        }


return false;

    }
};