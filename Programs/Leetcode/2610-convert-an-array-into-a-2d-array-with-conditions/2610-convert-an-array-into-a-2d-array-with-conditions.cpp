/*class Solution {
public:


    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        bool arr[201]={false};

        vector<vector<int>> ans;
        vector<int> temp;

        for(int i=0;i<n;i++){
            if(arr[nums[i]]){
                ans.push_back(temp);
                temp.clear();
                for(int j=0;j<201;j++){
                    arr[j]=false;
                }
            }

            temp.push_back(nums[i]);
            arr[nums[i]]=true;
        }


        if(!temp.empty()){
            ans.push_back(temp);
        }


return ans;


    }
};
*/



class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      
        int n=nums.size();

        vector<vector<int>> ans;
        vector<int> freq(n+1,0);


        for(int i=0;i<n;i++){
            if(ans.size()<=freq[nums[i]]){
                ans.push_back({});
            }

            ans[freq[nums[i]]].push_back(nums[i]);
            freq[nums[i]]++;

        }

return ans;

    }
};