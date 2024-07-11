// Approach - 1 : Using a Vector


// class Solution {

// private:
//     void helper(TreeNode* root, int &ans, vector<int> v){

//         if(!root) return;

//         v.push_back(root->val);

//         if(!root->left && !root->right){
//             int n = v.size();
//             int val = 0;
//             for(int i=0;i<n;i++){
//                 val+=(pow(10,n-i-1)*v[i]);
//             }
//             ans+=val;
//         }
 
//         helper(root->left,ans,v);
//         helper(root->right,ans,v);

//         return;
//     }


// public:
//     int sumNumbers(TreeNode* root) {

//         int sum = 0;
//         vector<int> v;

//         helper(root,sum,v);

//         return sum;

//     }
// };


// Approach-2 : Without using a vector


class Solution {

private:
    void helper(TreeNode* root, int &ans, int val){

        if(!root) return;

        val = (val*10) + root->val;
        
        if(!root->left && !root->right){
            ans+=val;
        }
 
        helper(root->left,ans,val);
        helper(root->right,ans,val);

        return;
    }


public:
    int sumNumbers(TreeNode* root) {

        int sum = 0;

        helper(root,sum,0);

        return sum;

    }
};