/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {

        if(!root) return "";

        string tree;
        queue<TreeNode*> q;
        q.push(root);
        tree+=to_string(root->val)+" ";

        while(!q.empty()){
            for(int i=0;i<q.size();i++){
                TreeNode* ele = q.front();
                q.pop();
                
                if(ele->left){
                    q.push(ele->left);
                    tree+=to_string(ele->left->val)+" ";

                } 
                else{
                    tree.push_back('N');
                    tree.push_back(' ');
                } 
                if(ele->right){
                    q.push(ele->right);
                    tree+=to_string(ele->right->val)+" ";
                } 
                else{
                    tree.push_back('N');
                    tree.push_back(' ');
                } 
                
            }
        }

        // cout<<tree;
        return tree;

    }

    TreeNode* helper (string data, int ind){       

        string temp;
        while(data[ind]!=' ') temp.push_back(data[ind++]);
        ind++;

        TreeNode* root = new TreeNode(stoi(temp));

        queue<TreeNode*> q;
        q.push(root);


        while(!q.empty() && ind<data.size()){
            for(int i=0;i<q.size();i++){
                TreeNode* node = q.front();
                q.pop();

                string temp;
                while(data[ind]!=' ') temp.push_back(data[ind++]);
                ind++;

                if(temp=="N"){
                    node->left = NULL;
                }
                else{
                    int val = stoi(temp);
                    TreeNode* left = new TreeNode(val);
                    node->left = left;
                    q.push(node->left);
                }

                temp="";
                while(data[ind]!=' ') temp.push_back(data[ind++]);
                ind++;

                if(temp=="N"){
                    node->right = NULL;
                }
                else{
                    int val = stoi(temp);
                    TreeNode* right = new TreeNode(val);
                    node->right = right;
                    q.push(node->right);
                }

            }

        }

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.length()==0) return NULL;
        TreeNode* root = helper(data,0);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));