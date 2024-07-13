// Approach - 1 : Using preorder traversal


// class Solution {

// private:
//     void helper(TreeNode* root, map<int,map<int,multiset<int>>> &mp, int dist, int level){
//         if(!root) return;  

//         mp[dist][level].insert(root->val);

//         helper(root->left,mp,dist-1,level+1);
//         helper(root->right,mp,dist+1,level+1);
//     }


// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int,map<int,multiset<int>>> mp;

//         helper(root,mp,0,0);

//         vector<vector<int>> ans;

//         for(auto i : mp){
//             vector<int> temp;
//             for(auto j : i.second){
//                 for(auto k : j.second){
//                     temp.push_back(k);
//                 }
//             }
//             ans.push_back(temp);
//         }


//         return ans; 
//     }
// };



// Approach - 2 : Using level order traversal


class Solution {

private:
    void helper(TreeNode* root, map<int,map<int,multiset<int>>> &mp){
        if(!root) return;  

        queue<pair<TreeNode*, pair<int,int>>> q;
        q.push({root,{0,0}});

        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode* ele = p.first;
            int dist = p.second.first; 
            int level = p.second.second;

            mp[dist][level].insert(ele->val);

            if(ele->left){
                q.push({ele->left,{dist-1,level+1}});
            }

            if(ele->right){
                q.push({ele->right,{dist+1,level+1}});
            }

        }


    }


public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;

        helper(root,mp);

        vector<vector<int>> ans;

        for(auto i : mp){
            vector<int> temp;
            for(auto j : i.second){
                for(auto k : j.second){
                    temp.push_back(k);
                }
            }
            ans.push_back(temp);
        }


        return ans; 
    }
};
