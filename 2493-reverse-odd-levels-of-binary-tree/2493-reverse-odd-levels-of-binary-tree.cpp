// Bruteforce using BFS twice

// class Solution {
// public:
//     TreeNode* reverseOddLevels(TreeNode* root) {
//         if(!root) return NULL;

//         queue<TreeNode*> q;
//         q.push(root);

//         vector<vector<int>> arr;
//         int lev = 0;

//         while(!q.empty()){
//             int size = q.size();
//             vector<int> level;
//             for(int i=0;i<size;i++){
//                 auto node = q.front();
//                 q.pop();

//                 level.push_back(node->val);

//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//             }
//             if(lev%2!=0) reverse(level.begin(),level.end());
//             arr.push_back(level);
//             lev++;
//         }

//         lev  = 0;
//         q.push(root);

//         while(!q.empty()){
//             int size = q.size();
//             for(int i=0;i<size;i++){
//                 auto node = q.front();
//                 q.pop();
                
//                 if(lev%2!=0){
//                     node->val = arr[lev][i];
//                 }

//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//             }
//             lev++;
//         }

//         return root;
//     }
// };


//Since it is given the tree is a perfect binarty tree we can follow this approach using dfs

class Solution {
private:
    void swapper(TreeNode* L, TreeNode* R, int lev){
        if(!L || !R) return;

        if(lev%2==0) swap(L->val, R->val);

        swapper(L->left,R->right,lev+1);
        swapper(L->right,R->left,lev+1);
    }

public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return NULL;
        swapper(root->left,root->right,0);
        return root;
    }
};