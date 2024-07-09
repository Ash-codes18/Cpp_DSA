/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {

        ios::sync_with_stdio(0);
        cin.tie(0);
        
        if(!root) return 0;

        int depth = 0;
        int n = root->children.size();

        for(int i=0;i<n;i++){
            depth = max(depth,maxDepth(root->children[i]));
        }

        return depth+1;

    }
};