/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

private:
    void traverseUpwards(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &nodes){
        if(!root) return;

        if(root->left){
            nodes[root->left] = root;
            traverseUpwards(root->left,nodes);
        }

        if(root->right){
            nodes[root->right] = root;
            traverseUpwards(root->right,nodes);
        }
        
    }


public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*,TreeNode*> nodes;
        traverseUpwards(root,nodes);

        unordered_map<TreeNode*,bool> visited;
        vector<int> ans;

        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int dist = 0;


        while(!q.empty()){
            int n = q.size();
            if(dist==k) break;

            for(int i=0;i<n;i++){
                TreeNode* current = q.front();
                q.pop();

                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left] = true;
                }

                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right] = true;
                }

                if(nodes[current] && !visited[nodes[current]]){
                    q.push(nodes[current]);
                    visited[nodes[current]] = true;
                }
            }        
            dist++;
        }


        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }


        return ans;
    }
};