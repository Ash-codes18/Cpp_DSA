/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
 void dfs(Node* current, Node* clone, unordered_map<Node*,Node*> &mp){
    mp[current] = clone;

    for(auto &i : current->neighbors){
        if(mp.find(i)==mp.end()){
            Node* temp = new Node(i->val);
            clone->neighbors.push_back(temp);
            dfs(i,temp,mp);
        }
        else clone->neighbors.push_back(mp[i]);
    }
 }

public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;

        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<Node*,Node*> mp;
        Node* root = new Node(node->val);
        dfs(node,root,mp);

        return root;
    }
};