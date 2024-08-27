class Solution {
private:

    bool isleaf(TreeNode* root){
        if(!root->left && !root->right) return true;
        return false;
    }

    void helper(TreeNode* &root, int target){
        if(!root) return;

        helper(root->left,target);
        helper(root->right,target);

        if(isleaf(root) && root->val==target){
            root=NULL;
        } 
    }


public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        TreeNode* prev = root;
        helper(prev,target);
        if(isleaf(root) && root->val==target) root = NULL;
        return root;
    }
};