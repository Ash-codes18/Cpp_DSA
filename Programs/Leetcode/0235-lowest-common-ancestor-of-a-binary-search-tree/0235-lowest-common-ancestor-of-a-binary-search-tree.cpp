// Naive 

// class Solution {
// private:
//     void path(TreeNode* root, TreeNode* &p, vector<TreeNode*> &a, vector<TreeNode*> temp){
//         if(!root || !a.empty()) return;
            
//         temp.push_back(root);
//         if(root==p) a=temp; 

//         if(root->val>p->val) path(root->left,p,a,temp);
//         else path(root->right,p,a,temp);
//     }


// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*> a,b,temp;
//         path(root,p,a,temp);
//         path(root,q,b,temp);

//         TreeNode* ans;

//         for(int i=0;i<a.size() && i<b.size();i++){
//             if(a[i] == b[i]) ans = a[i];
//         }

//         return ans;
//     }
// };




// Better


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        while(1){
            if(p->val<root->val && q->val<root->val) root = root->left;
            else if(p->val>root->val && q->val>root->val) root = root->right;
            else return root;
        }

        return root;
    }
};