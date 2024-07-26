// Invalid Approach Since time = O(n)


// class Solution {

// public:
//     int countNodes(TreeNode* root) {

//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         if(!root) return 0;

//         int left = countNodes(root->left);
//         int right = countNodes(root->right);
        
//         return left+right+1;
//     }
// };


// Valid Approach -> Time = O(Log n^2)

class Solution {

int left(TreeNode* root){
    if(!root) return 0;
    return 1 + left(root->left);
}
int right(TreeNode* root){
    if(!root) return 0;
    return 1 + right(root->right);
}



public:
    int countNodes(TreeNode* root) {
            
        if(!root) return 0;
        int l = left(root);
        int r = right(root);
        if(l==r) return pow(2,l)-1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);

    }
};

