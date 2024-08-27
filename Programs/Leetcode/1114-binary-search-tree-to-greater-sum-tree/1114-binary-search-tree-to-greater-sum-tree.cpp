class Solution {
private:
    void dfs(TreeNode* root, int &sum){
        if(!root) return;

        dfs(root->right,sum);
        sum+=root->val;
        root->val = sum;
        dfs(root->left,sum);
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        if(!root) return NULL;
        int sum = 0;
        dfs(root,sum);
        return root;
    }
};