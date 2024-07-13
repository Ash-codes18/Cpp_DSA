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
    void helper(TreeNode* root, string &ans, string temp){

        if(!root) return;

        temp.push_back(root->val+'a');

        if(!root->left &&  !root->right){
            reverse(temp.begin(),temp.end());
            if(ans.empty()) ans = temp;
            else{
                if(!lexicographical_compare(ans.begin(),ans.end(),temp.begin(),temp.end())){
                    ans = temp;
                }
            }
        }

        helper(root->left,ans,temp);
        helper(root->right,ans,temp);


        return;
    }

public:
    string smallestFromLeaf(TreeNode* root) {

        string ans,temp;

        helper(root,ans,temp);

        return ans;
        
    }
};