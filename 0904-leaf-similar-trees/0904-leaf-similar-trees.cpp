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
    void getleaves(TreeNode* root, vector<int> &arr){

        if(!root){
            return;
        }

        if(!root->left && !root->right){
            arr.push_back(root->val);
        }

        getleaves(root->left,arr);
        getleaves(root->right,arr);

    }   

public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        getleaves(root1,v1);
        getleaves(root2,v2);

        if(v1.size()!=v2.size()) return false;

        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]) return false;
        }

    return true;

    }
};