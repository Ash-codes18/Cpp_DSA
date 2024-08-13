class Solution {

private:
    void subs(vector<vector<int>> &ans, vector<int> &arr, vector<int> &temp, int n, int ind, int sum){
        if(sum >= n){
            if(sum == n){
                ans.push_back(temp);
            }
            return;
        }
        if(ind >= arr.size()){
            return ;
        }

        
        temp.push_back(arr[ind]);
        subs(ans,arr,temp,n,ind+1,sum+arr[ind]);
        if(!temp.empty()){
            temp.pop_back();
        }

        int idx = ind;
        while(idx+1 < arr.size() && arr[idx+1] == arr[idx]){
            idx++;
        }
        subs(ans,arr,temp,n,idx+1,sum);
    }


public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        subs(ans,candidates,temp,target,0,sum);
        
        return ans;
    }
};