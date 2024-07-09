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
public:
    int minDepth(TreeNode* root) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);

        if(!root) return 0;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if(right==0) return left+1;
        else if(left == 0) return right+1;

        return min(left,right)+1;

    }
};