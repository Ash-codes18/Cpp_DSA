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
    void swapper(TreeNode* root){
        if(!root) return;
        swap(root->left,root->right);
        swapper(root->left);
        swapper(root->right);
    }

public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        swapper(root);
        return root;
    }
};