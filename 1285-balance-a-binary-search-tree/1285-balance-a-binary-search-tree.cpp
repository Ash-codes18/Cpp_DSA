class Solution {
private:
    void get(TreeNode* root,vector<int> &arr){
        if(!root) return;

        get(root->left,arr);
        arr.push_back(root->val);
        get(root->right,arr);
    }

    TreeNode* build(vector<int> &arr,int start, int end){
        if(start>end) return NULL;

        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(arr[mid]);

        root->left = build(arr,start,mid-1);
        root->right = build(arr,mid+1,end);

        return root;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        get(root,arr);
        return build(arr,0,arr.size()-1);
    }
};