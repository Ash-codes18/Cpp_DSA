class Solution {

    int height(TreeNode* root){
        if(!root) return 0;

        int left = height(root->left);
        int right = height(root->right);

        return max(left,right)+1;
    }

    void dfs(TreeNode* root, vector<vector<string>> &ans,int &h, int row, int col){
        if(!root) return;
        
        ans[row][col] = to_string(root->val);

        dfs(root->left,ans,h,row+1,col - pow(2,h-row-2));
        dfs(root->right,ans,h,row+1,col + pow(2,h-row-2));
    }

public:
    vector<vector<string>> printTree(TreeNode* root) {
        int h = height(root);
        vector<vector<string>> ans(h,vector<string>(pow(2,h)-1));
        dfs(root,ans,h,0,(pow(2,h)-1)/2);
        return ans;
    }
};