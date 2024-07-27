class Solution {

private:
    void dfs(TreeNode* root, int k,int &n, int &ans){
        if(!root || n>=k) return;

        dfs(root->left,k,n,ans);
        n++;
        if(n==k) ans = root->val;
        dfs(root->right,k,n,ans);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        int n=0,ans;
        dfs(root,k,n,ans);
        return ans;
    }
};