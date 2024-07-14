// Approach - 1 : Working but MLE


// class Solution {

// private:
//     void helper(TreeNode *root,TreeNode *node,vector<TreeNode*> &arr,vector<TreeNode*> temp){
//         if(!root) return;

//         temp.push_back(root);

//         if(root==node){
//             arr=temp;
//         }

//         helper(root->left,node,arr,temp);
//         helper(root->right,node,arr,temp);

//     }

// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
//             vector<TreeNode*> a,b,temp;
//             helper(root,p,a,temp);
//             helper(root,q,b,temp);

//             TreeNode* ans;
            
//             int i = 0;
//             while (i < a.size() && i < b.size()){
//                 if(a[i] == b[i]) ans = a[i];
//                 i++;
//             }

//         return ans;

//     }
// };




class Solution {


public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return NULL;

        if(root==p || root==q) return root;

        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        if(left && right) return root;

        else if(left && !right) return left;
        
        else if(!left && right) return right;

        else return NULL;

    }
};