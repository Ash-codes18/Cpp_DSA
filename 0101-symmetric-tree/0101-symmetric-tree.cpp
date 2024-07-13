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

    void traverseLeft(TreeNode *root,vector<pair<int,int>> &arr, int dist){
        if(!root) return;

        arr.push_back({root->val,dist});

        traverseLeft(root->left,arr,dist-1);
        traverseLeft(root->right,arr,dist+1);
    }

    void traverseRight(TreeNode *root,vector<pair<int,int>> &arr, int dist){
        if(!root) return;

        arr.push_back({root->val,dist});

        traverseRight(root->right,arr,dist+1);
        traverseRight(root->left,arr,dist-1);
    }

public:
    bool isSymmetric(TreeNode* root) {

        vector<pair<int,int>> left;
        vector<pair<int,int>> right;

        traverseLeft(root,left,0);
        traverseRight(root,right,0);

        int n = left.size();

        if(n!=right.size()) return false;


        for(int i=0;i<n;i++){
            
            if(left[i].first!=right[i].first)  return false;
            else if(-left[i].second!=right[i].second) return false;  
            
        }

        return true;

    }
};