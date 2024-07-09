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



// approach-1 iterative

// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(!root){
//             return 0;
//         }   

//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(NULL);
//         int level = 1;

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
//                 q.push(NULL);
//                 level++;
//             }
//         }


// return level;

//     }
// };

// approach-2 recursive

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        if(!root){
            return 0;
        }   

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return max(left,right)+1;
    }
};