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

    void helper(TreeNode* root, vector<string> &ans, string temp){

        if(!root) return;

        temp+=to_string(root->val);
        temp+="->";

        if(!root->left &&  !root->right){
            temp.pop_back();
            temp.pop_back();
            ans.push_back(temp);
        }

        helper(root->left,ans,temp);
        helper(root->right,ans,temp);

        return;
    }


public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp;

        helper(root,ans,temp);

        return ans;
    }
};