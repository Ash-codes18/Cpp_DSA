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
    long long kthLargestLevelSum(TreeNode* root, int k) {
       
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        vector<long long> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        long long sum = 0;

        while(!q.empty()){

            TreeNode* ele = q.front();
            q.pop();

            if(ele){
                sum+=ele->val;
                if(ele->left){
                    q.push(ele->left);
                }
                if(ele->right){
                    q.push(ele->right);
                }
            }

            else if(!q.empty()){
                q.push(NULL);
                ans.push_back(sum);
                sum = 0;
            }
        }
        ans.push_back(sum);
        
        sort(ans.begin(),ans.end());

        return (k>ans.size())?-1:ans[ans.size()-k];

    }
};