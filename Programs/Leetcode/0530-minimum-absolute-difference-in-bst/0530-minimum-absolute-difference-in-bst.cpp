class Solution {

private:
    void diff(TreeNode* root, TreeNode* &prev, int &ans){
        if(!root) return;
        diff(root->left,prev,ans);
        if(prev){
            ans = min(ans,abs(root->val-prev->val));
        }
        prev = root;
        diff(root->right,prev,ans);
    }

public:
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev = NULL;
        int ans = INT_MAX;
        diff(root,prev,ans); 
        return ans;
    }
};