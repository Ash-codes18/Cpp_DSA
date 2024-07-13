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
    void dfs(TreeNode* root, int x, long long sum, long long &count){
        if(!root) return;

        sum+=root->val;
        // cout<<sum<<" ";

        if(sum==x) count++;

        dfs(root->left,x,sum,count);
        dfs(root->right,x,sum,count);
    }

    void bfs(TreeNode* root, long long x, long long &count){
        if(!root) return;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            for(int i=0;i<q.size();i++){                
                TreeNode* ele = q.front();
                q.pop();
                // cout<<ele->val<<" : ";
                dfs(ele,x,0,count);
                // cout<<endl;

                if(ele->left){
                    q.push(ele->left);
                }
                if(ele->right){
                    q.push(ele->right);
                }
            }
        }

    }

public:
    int pathSum(TreeNode* root, int targetSum) {
        
        long long count = 0;
        bfs(root,targetSum,count);
        return count;

    }
};