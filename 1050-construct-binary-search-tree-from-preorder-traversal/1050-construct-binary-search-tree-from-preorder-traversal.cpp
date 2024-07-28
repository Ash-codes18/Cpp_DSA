class Solution {
private:
    int index; 
    TreeNode* builder(int ub, vector<int> &preorder) {
        if (index >= preorder.size() || preorder[index] > ub) return NULL; 
        int val = preorder[index];
        
        TreeNode* root = new TreeNode(val);
        index++;
        
        root->left = builder(val, preorder);
        root->right = builder(ub, preorder);
        
        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        index = 0;
        return builder(INT_MAX, preorder);
    }
};