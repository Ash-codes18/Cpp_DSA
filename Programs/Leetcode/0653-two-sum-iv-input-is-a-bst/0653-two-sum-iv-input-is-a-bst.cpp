// Bruteforce -> O(N) space

// class Solution {
// private:
//     void inorder(TreeNode* root, vector<int> &arr){
//         if(!root) return;

//         inorder(root->left,arr);
//         arr.push_back(root->val);
//         inorder(root->right,arr);
//     }

// public:
//     bool findTarget(TreeNode* root, int k) {
        
//         vector<int> arr;
//         inorder(root,arr);
//         int i=0, j=arr.size()-1;

//         while(i<j){
//             if(arr[i]+arr[j]==k) return true;
//             else if(arr[i]+arr[j]>k) j--;
//             else i++;
//         }

//         return false;
//     }
// };


// Optimized -> O(H) space

class Solution {

private:
    stack<TreeNode*> left;
    stack<TreeNode*> right;

    int next(){
        TreeNode* ele = left.top();
        left.pop();
        int val = ele->val;
        ele = ele->right;
        while(ele){
            left.push(ele);
            ele=ele->left;
        }
        return val;
    }

    int before(){
        TreeNode* ele = right.top();
        right.pop();
        int val = ele->val;
        ele = ele->left;
        while(ele){
            right.push(ele);
            ele=ele->right;
        }
        return val;
    }

public:
    bool findTarget(TreeNode* root, int k) {
        
        TreeNode* curr = root;

        while(curr){
            left.push(curr);
            curr=curr->left;
        }
        
        curr = root;

        while(curr){
            right.push(curr);
            curr=curr->right;
        }


        int left = next();
        int right = before();

        while(left!=right){
            if(left+right==k) return true;
            else if(left+right>k) right = before();
            else left = next();
        }

        return false;
    }
};