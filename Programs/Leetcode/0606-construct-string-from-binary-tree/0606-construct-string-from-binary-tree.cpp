class Solution {
private:
    void dfs(TreeNode* root, string &ans) {
        if(!root) return;
        
        ans += to_string(root->val);
        
        if(root->left || root->right){
            ans.push_back('(');
            dfs(root->left, ans);
            ans.push_back(')');
        }
        
        if(root->right){
            ans.push_back('(');
            dfs(root->right, ans);
            ans.push_back(')');
        }
    }

public:
    string tree2str(TreeNode* root) {
        string ans;
        dfs(root, ans);
        return ans;
    }
};
