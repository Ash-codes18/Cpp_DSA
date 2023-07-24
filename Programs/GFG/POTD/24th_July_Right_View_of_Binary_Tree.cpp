
/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> result;
        if (!root)
            return result;
        
        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            int levelSize = q.size();

            for (int i = 0; i < levelSize; ++i)
            {
                Node* node = q.front();
                q.pop();

                // If it is the last node at this level, add it to the result list.
                if (i == levelSize - 1)
                    result.push_back(node->data);

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }

        return result;
    }
};
