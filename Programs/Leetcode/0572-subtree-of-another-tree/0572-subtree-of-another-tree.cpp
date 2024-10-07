class Solution {
private:
    void dfs(unordered_map<TreeNode*,int> &mp, TreeNode* root, int val){
        if(!root) return;
        if(val==root->val) mp[root] = val;
        dfs(mp,root->left,val);
        dfs(mp,root->right,val);
    }

    bool valid(TreeNode* root, TreeNode* sr){
        if(!root && sr) return false;
        if(root && !sr) return false;
        if(!root && !sr) return true;

        bool left = valid(root->left,sr->left); 
        bool right = valid(root->right,sr->right); 

        return root->val==sr->val && left && right;
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        unordered_map<TreeNode*, int> mp;
        dfs(mp,root,subRoot->val);
        
        for(auto i : mp){
            if(valid(i.first,subRoot)) return true;  
        }

        return false;
    }
};