// Approach - 1 : Normal Level order traversal

// class Solution {
// public:
//     int findBottomLeftValue(TreeNode* root) {
        
//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(NULL);
//         int ans = root->val;

//         while(!q.empty()){

//             TreeNode* ele = q.front();
//             q.pop();

//             if(ele){
//                 if(ele->left){
//                     q.push(ele->left);
//                 }
//                 if(ele->right){
//                     q.push(ele->right);
//                 }
//             }

//             else if(!q.empty()){
//                 ans = q.front()->val;
//                 q.push(NULL);
//             }
//         }

//         return ans;
//     }
// };



// Approach - 2 : A bit modified level order traversal

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            root = q.front();
            q.pop();

            if(root->right) q.push(root->right);
            if(root->left) q.push(root->left);            
        }

        return root->val;
    }
};