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

private:
    void helper(Node* root, vector<int> &arr){

        if(!root) return;

        int size = root->children.size();

        for(int i=0;i<size;i++){
            helper(root->children[i],arr);
        }
        arr.push_back(root->val);

    }


public:
    vector<int> postorder(Node* root) {
        vector<int> arr;
        helper(root,arr);
        return arr;
    }
};