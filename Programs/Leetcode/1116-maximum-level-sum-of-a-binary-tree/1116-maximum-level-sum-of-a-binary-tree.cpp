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
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> arr;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            for(int i = 0;i<size;i++){
                TreeNode* ele = q.front();
                q.pop();

                sum+=ele->val;
                if(ele->left) q.push(ele->left);
                if(ele->right) q.push(ele->right);
            }
            arr.push_back(sum);
        }

        int max = INT_MIN;
        int ind = 0;

        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max = arr[i];
                ind = i;
            }
        }

        return ind+1;
    }
};