class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<int,bool> mp;
        unordered_map<int,TreeNode*> nodes;


        for(auto i : arr){
            if(mp.find(i[0])==mp.end()){
                TreeNode* parent = new TreeNode(i[0]);
                nodes[i[0]]=parent;
                mp[i[0]] = false; 
            }
        }

        for(auto i : arr){
            mp[i[1]] = true;

            if(nodes.find(i[1]) == nodes.end()){
                TreeNode* child = new TreeNode(i[1]);
                if(i[2]) nodes[i[0]]->left = child;
                else nodes[i[0]]->right = child;
            }
            
            else{
                if(i[2]) nodes[i[0]]->left = nodes[i[1]];
                else nodes[i[0]]->right = nodes[i[1]];
            }
        }

        TreeNode* root = NULL;

        for(auto i : mp){
            if(!i.second) root = nodes[i.first];
        }

        return root;
    }
};