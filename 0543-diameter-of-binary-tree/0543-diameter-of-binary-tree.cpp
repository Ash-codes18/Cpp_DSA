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


// Approach-1 :  O(n^2)


// class Solution {

// private:

//     int height(TreeNode* root){

//         if(!root) return 0;

//         int left = height(root->left);
//         int right = height(root->right);

//         return max(left,right)+1;
//     }


// public:
//     int diameterOfBinaryTree(TreeNode* root) {
        
//         if(!root) return 0;

//         int a = diameterOfBinaryTree(root->left);
//         int b = diameterOfBinaryTree(root->right);
//         int c = height(root->left)+height(root->right);

//         return max(a,max(b,c));

//     }
// };


// Approach-2 : O(n)


class Solution {

private:
    int height(TreeNode* root, int &maxi){
       
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        if(!root) return 0;

        int lh = height(root->left,maxi);
        int rh = height(root->right,maxi);

        maxi = max(maxi,lh+rh);

        return 1+max(lh,rh);

    }



public:
    int diameterOfBinaryTree(TreeNode* root, int maxi=0) {

        ios::sync_with_stdio(0);
        cin.tie(0);

        int diameter = 0;
        height(root,diameter);

        return diameter;

    }
};