class Solution {
private:
    int ind;
    TreeNode* build(vector<pair<int,int>> &arr, int level){
        if(ind>=arr.size() || arr[ind].second!=level) return NULL;
        TreeNode* root = new TreeNode(arr[ind].first);
        ind++;

        root->left = build(arr,level+1);
        root->right = build(arr,level+1);
        
        return root;
    }


public:
    TreeNode* recoverFromPreorder(string traversal) {
        vector<pair<int,int>> levels;
        int level = 0;

        for(int i=0;i<traversal.size();i++){
            if(traversal[i]=='-') level++;
            else{
                int digit = INT_MIN;
                while(isdigit(traversal[i])){
                    if(digit==INT_MIN) digit = traversal[i]-'0';
                    else{
                        digit = (digit*10) + traversal[i]-'0';
                    }
                    i++;
                }

                levels.push_back({digit,level});
                i--;
                level = 0;
            }
        }

        ind = 0;
        return build(levels,0);

    }
};