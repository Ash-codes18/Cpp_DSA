class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        vector<int> lsum;

        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            for(int i=0;i<size;i++){
                auto node = q.front();
                q.pop();

                sum+=node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            lsum.push_back(sum);
        }


        q.push(root);
        int level = 0;

        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto node = q.front();
                q.pop();

                int psum = 0;

                if(node->left){
                    psum+=node->left->val;
                    q.push(node->left);
                }

                if(node->right){
                    psum+=node->right->val;
                    q.push(node->right);
                }

                if(level+1<lsum.size()) psum = lsum[level+1]-psum;

                if(node->left) node->left->val = psum;
                if(node->right) node->right->val = psum;
            }
            level++;
        }

        root->val = 0;
        return root;
    }
};