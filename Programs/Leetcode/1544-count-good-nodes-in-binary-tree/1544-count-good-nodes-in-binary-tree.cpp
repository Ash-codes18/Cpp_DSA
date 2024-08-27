class Solution {

private:
    void dfs(TreeNode* root, int prev, int &ans){
        if(!root) return;

        if(prev<=root->val){
            ans++;
            prev = root->val;
        }

        dfs(root->left,prev,ans);
        dfs(root->right,prev,ans);
    }

public:
    int goodNodes(TreeNode* root) {
        int ans = 0;
        dfs(root,INT_MIN,ans);
        return ans;
    }
};