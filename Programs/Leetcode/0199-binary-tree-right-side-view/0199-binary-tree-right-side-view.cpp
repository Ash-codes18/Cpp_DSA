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


private:
    void helper(TreeNode* root, map<int,int> &mp, int level){
        if(!root) return;

        if(mp.find(level)==mp.end()) mp[level] = root->val;

        helper(root->right,mp,level+1);
        helper(root->left,mp,level+1);
    }

public:
    vector<int> rightSideView(TreeNode* root) {
        map<int,int> mp;
        helper(root,mp,0);
        vector<int> ans;

        for(auto i : mp){
            ans.push_back(i.second);
        }

        return ans;
    }
};