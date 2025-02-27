class CBTInserter {
public:
    TreeNode* temp;
    CBTInserter(TreeNode* root) {
        temp = root;
    }
    
    int insert(int val) {
        queue<TreeNode*> q;
        q.push(temp);

        bool flag = false;
        int parent;

        while(!q.empty()){
            if(flag) break;
            int s = q.size();
            for(int i=0;i<s;i++){
                auto node = q.front();
                q.pop();

                if(node->left) q.push(node->left);
                else{
                    node->left = new TreeNode(val);
                    parent = node->val;
                    flag = true;
                    break;
                }
                
                if(node->right) q.push(node->right);
                else{
                    node->right = new TreeNode(val);
                    parent = node->val;
                    flag = true;
                    break;
                }
            }
        }

        return parent;
    }
    
    TreeNode* get_root() {
        return temp;
    }
};