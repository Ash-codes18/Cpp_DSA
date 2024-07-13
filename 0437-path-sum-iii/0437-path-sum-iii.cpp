// Approach - 1 : BFS+DFS -> DFS on every node using BFS


// class Solution {

// private:
//     void dfs(TreeNode* root, int x, long long sum, long long &count){
//         if(!root) return;

//         sum+=root->val;
//         // cout<<sum<<" ";

//         if(sum==x) count++;

//         dfs(root->left,x,sum,count);
//         dfs(root->right,x,sum,count);
//     }

//     void bfs(TreeNode* root, long long x, long long &count){
//         if(!root) return;

//         queue<TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){

//             for(int i=0;i<q.size();i++){                
//                 TreeNode* ele = q.front();
//                 q.pop();
//                 // cout<<ele->val<<" : ";
//                 dfs(ele,x,0,count);
//                 // cout<<endl;

//                 if(ele->left){
//                     q.push(ele->left);
//                 }
//                 if(ele->right){
//                     q.push(ele->right);
//                 }
//             }
//         }

//     }

// public:
//     int pathSum(TreeNode* root, int targetSum) {
        
//         long long count = 0;
//         bfs(root,targetSum,count);
//         return count;

//     }
// };




// Approach - 2  : DFS on every node using DFS


class Solution {

private:
    void dfs(TreeNode* root, int x, long long sum, long long &count){
        if(!root) return;

        sum+=root->val;

        if(sum==x) count++;

        dfs(root->left,x,sum,count);
        dfs(root->right,x,sum,count);
    }


public:
    long long count = 0;
    int pathSum(TreeNode* root, int targetSum) {
        
        if(root){
            dfs(root,targetSum,0,count);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);
        }
          
        return count;

    }
};