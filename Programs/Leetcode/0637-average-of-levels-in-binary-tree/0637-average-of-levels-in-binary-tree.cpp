class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            double sum = 0;
            int count = 0;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                sum+=node->val;
                count++;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(sum/count);
        }

        return ans;
    }
};