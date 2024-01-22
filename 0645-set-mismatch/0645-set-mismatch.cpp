class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> count(n+1,0);



        for(int i=0;i<n-1;i++){
            count[nums[i]]++;
        }
        count[nums[n-1]]++;



        for(int i=1;i<n+1;i++){
            if(count[i]==2){
                ans.push_back(i);
                break;
            }
        }

        for(int i=1;i<n+1;i++){
            if(count[i]==0){
                ans.push_back(i);
                break;
            }
        }


    return ans;

    }
};