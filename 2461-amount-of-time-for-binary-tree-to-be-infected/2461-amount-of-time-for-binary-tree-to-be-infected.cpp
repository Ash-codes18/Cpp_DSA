class Solution {
private:
    void dfs(TreeNode* root, vector<pair<int,int>> &edges, unordered_set<int> &st){
        if(!root) return;
        st.insert(root->val);

        if(root->left){
            edges.push_back({root->val,root->left->val});
            dfs(root->left,edges,st);
        }

        if(root->right){
            edges.push_back({root->val,root->right->val});
            dfs(root->right,edges,st);
        }
    }

    void solver(int start, unordered_map<int,vector<int>> &mp, int &ans, int level, unordered_set<int> &st){
        ans = max(ans,level);
        st.erase(start);

        for(int &i : mp[start]){
            if(st.find(i)!=st.end()) solver(i,mp,ans,level+1,st);
        }
    }

public:
    int amountOfTime(TreeNode* root, int start) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<pair<int,int>> edges;
        unordered_set<int> st;
        dfs(root,edges,st);

        unordered_map<int,vector<int>> mp;
        for(auto &i : edges){
            mp[i.first].push_back(i.second);
            mp[i.second].push_back(i.first);
        }    

        int ans = 0;

        solver(start,mp,ans,0,st);
        return ans;
    }
};