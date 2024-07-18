class Solution {

private:
    void convertToGraph(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &mp){
        if(!root) return;

        if(root->left){
            mp[root->left] = root;
            convertToGraph(root->left,mp);
        }

        if(root->right){
            mp[root->right] = root;
            convertToGraph(root->right,mp);
        }
    }

    void moveOutwards(TreeNode* root, unordered_map<TreeNode*,TreeNode*> &mp, unordered_map<TreeNode*,bool> &vis, int dist, int x, int &ans){
        if(!root || dist > x) return;

        if(!root->left && !root->right && dist<=x) ans++;
        
        if(mp[root] && !vis[mp[root]]){
            vis[mp[root]] = true;
            moveOutwards(mp[root],mp,vis,dist+1,x,ans);
        }
        if(root->left && !vis[root->left]){
            vis[root->left] = true;
            moveOutwards(root->left,mp,vis,dist+1,x,ans);
        }  
        if(root->right && !vis[root->right]){
            vis[root->right] = true;
            moveOutwards(root->right,mp,vis,dist+1,x,ans);
        }  
    
    }

    void dfs(TreeNode* root, unordered_map<TreeNode*,TreeNode*> &mp, int x, int &ans){
        if(!root) return;


        if(!root->left && !root->right){
            unordered_map<TreeNode*,bool> vis;
            vis[root] = true;
            moveOutwards(root,mp,vis,0,x,ans);
            ans--;
        }

        dfs(root->left,mp,x,ans);
        dfs(root->right,mp,x,ans);
    } 


public:
    int countPairs(TreeNode* root, int distance) {

        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<TreeNode*,TreeNode*> mp;
        convertToGraph(root,mp);
        int ans = 0;
        dfs(root,mp,distance,ans);

        return ans/2;
    }
};
