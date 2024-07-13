/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

private:

    void helper(TreeNode* root, int x, bool &ans, int sum){
        if(!root) return;

        sum+=root->val;
        if(sum==x && !root->left && !root->right) ans = true;

        helper(root->left,x,ans,sum);
        helper(root->right,x,ans,sum);

        return;
    }

public:
    bool hasPathSum(TreeNode* root, int x) {

        bool ans = 0;
        int sum = 0;

        helper(root,x,ans,sum);

        return ans;

    }
};