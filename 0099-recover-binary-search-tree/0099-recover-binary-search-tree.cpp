// Bruteforce

// class Solution {
// private:
//     void get(TreeNode* root, vector<int> &arr){
//         if(!root) return;

//         get(root->left,arr);
//         arr.push_back(root->val);
//         get(root->right,arr);
//     }

//     void recover(TreeNode* &temp, vector<int> arr, int &ind){
//         if(!temp) return;

//         recover(temp->left,arr,ind);
//         if(temp->val!=arr[ind]) temp->val = arr[ind];
//         ind++;
//         recover(temp->right,arr,ind);
//     }

// public:
//     void recoverTree(TreeNode* root) {
//         vector<int> arr;
//         get(root,arr);
//         sort(arr.begin(),arr.end());
//         TreeNode* temp = root;
//         int i = 0;
//         recover(temp,arr,i);
//     }
// };


// Optimized

class Solution {

private:
    void dfs(TreeNode* root,TreeNode* &prev, TreeNode* &f, TreeNode* &s, TreeNode* &l){
        if(!root) return;

        dfs(root->left,prev,f,s,l);
        if(prev && prev->val>root->val){
            if(!f){                                
                s=root;
                f=prev;
            }
            else l = root;
        }
        prev = root;
        dfs(root->right,prev,f,s,l);
    }


public:
    void recoverTree(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        TreeNode *prev=NULL,*f=NULL,*s=NULL,*l=NULL;
        dfs(root,prev,f,s,l);

        if(l) swap(f->val,l->val);
        else swap(f->val,s->val);
    }
};