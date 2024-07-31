void trav(BinaryTreeNode<int> *root,vector<int> &in, vector<int> &pre, vector<int> &post){
    if(!root) return;
    pre.push_back(root->data);
    
    trav(root->left, in, pre, post);
    in.push_back(root->data);
    trav(root->right, in, pre, post);
    post.push_back(root->data);
}

