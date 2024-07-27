class Solution {
private:
    void dfs(TreeNode* root, long &prev, bool &ans) {
        if (!root || !ans) return;

        dfs(root->left, prev, ans);
        
        if (root->val <= prev) {
            ans = false;
            return;
        }
        prev = root->val;

        dfs(root->right, prev, ans);
    }

public:
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        long prev = LONG_MIN;
        bool ans = true;
        dfs(root, prev, ans);
        return ans;
    }
};
