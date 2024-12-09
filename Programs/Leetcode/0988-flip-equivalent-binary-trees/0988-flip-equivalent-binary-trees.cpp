class Solution {
void dfs(TreeNode* root, unordered_map<int,int> &mp){
    if(!root) return;

    if(root->left){
        mp[root->left->val] = root->val;
        dfs(root->left,mp);
    }
    
    if(root->right){
        mp[root->right->val] = root->val;
        dfs(root->right,mp);
    }
}


public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && root2) return false;
        if(!root2 && root1) return false;
        if(!root1 && !root2) return true;

        unordered_map<int,int> mp1;        
        unordered_map<int,int> mp2;

        dfs(root1,mp1);
        dfs(root2,mp2);

        for(auto &i : mp1){
            if(i.second!=mp2[i.first]) return false;
        }
        for(auto &i : mp2){
            if(i.second!=mp1[i.first]) return false;
        }

        return true;
    }
};