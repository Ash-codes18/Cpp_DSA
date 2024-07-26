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

private:    
    TreeNode* builder(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, map<int,int> &mp){
        if(preStart>preEnd || inStart>inEnd) return NULL;

        TreeNode* root = new TreeNode(preorder[preStart]);

        int inRoot = mp[root->val];
        int numsLeft = inRoot - inStart;

        root->left = builder(preorder,preStart+1,numsLeft+preStart,inorder,inStart,inRoot-1,mp);
        root->right = builder(preorder,preStart+1+numsLeft,preEnd,inorder,inRoot+1,inEnd,mp);

        return root;
    }


public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size();
        int m = inorder.size();

        map<int,int> indexes;

        for(int i=0;i<m;i++){
            indexes[inorder[i]] = i;
        }

        TreeNode* root = builder(preorder,0,n-1,inorder,0,m-1,indexes);

        return root;
    }
};