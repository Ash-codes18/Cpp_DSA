class BSTIterator {
public:
    stack<TreeNode*> st;

    BSTIterator(TreeNode* root) {
        while(root){
            st.push(root);
            root=root->left;
        }
    }
    
    int next(){
        TreeNode* node = st.top();
        st.pop();
        int ans = node->val;
        node = node->right;
        while(node){
            st.push(node);
            node = node->left;
        }
        return ans;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */