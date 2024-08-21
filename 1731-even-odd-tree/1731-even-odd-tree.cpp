class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        int level = 0;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            int n;
            (level%2==0) ? n = INT_MIN : n = INT_MAX; 
            for(int i=0;i<size;i++){
                TreeNode* ele = q.front();
                q.pop();  

                if(level%2==0){
                    if(ele->val%2==0 || ele->val<=n) return false;
                }

                else{
                    if(ele->val%2!=0 || ele->val>=n) return false;
                }

                n = ele->val;

                if(ele->left) q.push(ele->left);
                if(ele->right) q.push(ele->right);  
            }
            level++;
        }

        return true;

    }
};