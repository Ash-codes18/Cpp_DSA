class Solution {

private:
    int dfs(TreeNode* root, vector<int> &arr){
        if(!root) return 0;

        int left = dfs(root->left,arr);
        int right = dfs(root->right,arr);
        arr.push_back(left+right+root->val);

        return root->val+left+right;
    }

public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> arr;
        dfs(root,arr);
        unordered_map<int,int> mp;
        vector<int> ans;
        int maxfreq = 0;

        for(int i : arr){
            mp[i]++;
            maxfreq = max(maxfreq,mp[i]);
        }

        for(auto i : mp){
            if(i.second==maxfreq) ans.push_back(i.first);
        }

        return ans;
    }
};