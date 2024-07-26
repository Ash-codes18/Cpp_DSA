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
    void helper(TreeNode* root, int sum, int target, vector<int> temp, vector<vector<int>> &ans){
        if(!root) return;

        sum+=root->val;
        temp.push_back(root->val);

        if(sum==target && !root->left && !root->right){
            ans.push_back(temp);
        }

        helper(root->left,sum,target,temp,ans);
        helper(root->right,sum,target,temp,ans);
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        vector<int> temp;

        helper(root,0,targetSum,temp,ans);

        return ans;
    }
};