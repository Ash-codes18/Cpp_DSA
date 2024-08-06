class Codec {
    string ans;
public:
    string serialize(TreeNode* root) {
        if(!root) return ans;
        ans+=to_string(root->val);
        ans.push_back('#');
        serialize(root->left);
        serialize(root->right);
        return ans;
    }

    TreeNode* build(int ub, vector<int> &s, int &ind){
        if(s.size()<=ind || s[ind]>ub) return NULL;
        int val = s[ind];
        TreeNode* root = new TreeNode(s[ind]);

        ind++;
        root->left = build(val,s,ind);
        root->right = build(ub,s,ind);

        return root;
    }

    TreeNode* deserialize(string data) {
        if(data.empty()) return NULL;
        vector<int> s;
        int ind = 0;
        string temp;
        for(char i : data){
            if(i=='#'){
                s.push_back(stoi(temp));
                temp.clear();
            }
            else temp.push_back(i);
        }
        if(!temp.empty()) s.push_back(stoi(temp));

        return build(INT_MAX,s,ind);
    }
};
