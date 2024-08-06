class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* ans = new TreeNode(val);
            ans->left = root;
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        int h = 0;

        while(!q.empty()){
            h++;
            int size = q.size();
            bool flag = false;
            for(int i=0;i<size;i++){
                TreeNode* ele = q.front();
                q.pop();

                if(h==depth-1){
                    flag = true;
                    TreeNode* left = ele->left;
                    TreeNode* right = ele->right;

                    TreeNode* nodeleft = new TreeNode(val);
                    ele->left = nodeleft;
                    nodeleft->left = left;
                    TreeNode* noderight = new TreeNode(val);
                    ele->right = noderight;
                    noderight->right = right;
                    flag = true;
                }
                else{
                    if(ele->left) q.push(ele->left);
                    if(ele->right) q.push(ele->right);
                }

            }
            if(flag) return root;
        }   

        return root;
    }
};