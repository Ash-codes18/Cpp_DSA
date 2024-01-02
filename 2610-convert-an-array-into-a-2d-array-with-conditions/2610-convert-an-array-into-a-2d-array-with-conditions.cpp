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
        vector<int> freq(nums.size() + 1);
        
        vector<vector<int>> ans;
        for (int c : nums) {
            if (freq[c] >= ans.size()) {
                ans.push_back({});
            }
            
            // Store the integer in the list corresponding to its current frequency.
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        
        return ans;
    }
};