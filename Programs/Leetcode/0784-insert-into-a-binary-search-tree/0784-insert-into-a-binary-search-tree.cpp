// Approach - 1 : Recursive


// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {

//         if(!root){
//             root = new TreeNode(val);
//             return root;
//         }

//         if(!root->left && root->val>val){
//             root->left =  new TreeNode(val);;
//             return root;
//         }
//         if(!root->right && root->val<val){
//             root->right = new TreeNode(val);
//             return root;
//         }

//         if(root && root->val>val) insertIntoBST(root->left,val);
//         else if(root && root->val<val) insertIntoBST(root->right,val);
        
//         return root;
//     }
// };




// Approach -2 : Iterative


class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(!root) return new TreeNode(val);
        
        TreeNode* ans = root;

        while(1){
            if(root->val<val){ //move left
                if(!root->right){
                    root->right = new TreeNode(val);
                    break;
                }
                else root = root->right;
            }   
            else{ //move right
                if(!root->left){
                    root->left = new TreeNode(val);
                    break;
                }
                else root = root->left;
            }
        }

        return ans;
    }
};
