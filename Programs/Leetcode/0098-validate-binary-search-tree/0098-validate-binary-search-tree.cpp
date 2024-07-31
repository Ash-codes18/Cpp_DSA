// Approach - 1 - inorder traversal

// class Solution {
// private:
//     void dfs(TreeNode* root, long &prev, bool &ans) {
//         if (!root || !ans) return;

//         dfs(root->left, prev, ans);
        
//         if (root->val <= prev) {
//             ans = false;
//             return;
//         }
//         prev = root->val;

//         dfs(root->right, prev, ans);
//     }

// public:
//     bool isValidBST(TreeNode* root) {
//         if (!root) return true;
//         long prev = LONG_MIN;
//         bool ans = true;
//         dfs(root, prev, ans);
//         return ans;
//     }
// };



// Approach - 2 : Using Range


class Solution {
private:
    bool dfs(TreeNode* root, long min, long max) {
        if (!root) return true;

        if(root->val>=max || root->val<=min) return false;

        return dfs(root->left,min,root->val) && dfs(root->right,root->val,max);
    }

public:
    bool isValidBST(TreeNode* root) {
        return dfs(root,LONG_MIN,LONG_MAX);
    }
};
