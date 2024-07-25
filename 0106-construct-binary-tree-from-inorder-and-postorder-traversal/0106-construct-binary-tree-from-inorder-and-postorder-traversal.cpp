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
    TreeNode* builder(vector<int>& postorder, int postStart, int postEnd, vector<int>& inorder, int inStart, int inEnd, unordered_map<int,int> &mp){

        if(postStart>postEnd || inStart>inEnd) return NULL;
        

        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inRoot = mp[root->val];
        int numsLeft = inRoot - inStart;

        root->left = builder(postorder,postStart,numsLeft+postStart-1,inorder,inStart,inRoot-1,mp);
        root->right = builder(postorder,postStart+numsLeft,postEnd-1,inorder,inRoot+1,inEnd,mp);


        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n = inorder.size();
        int m = postorder.size();

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++) mp[inorder[i]] = i;
        // reverse(postorder.begin(),postorder.end());
        
        TreeNode* root = builder(postorder,0,m-1,inorder,0,n-1,mp);

        return root;
    }
};