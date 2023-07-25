

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


//Function to return a list containing the level order traversal in spiral form.

vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    if(root ==NULL) 
        return ans;
    
    queue<Node*>q;
    q.push(root);
    int a=0;
    
    while(!q.empty())
    {
        
        int size=q.size();
        vector<int>level;
        
        for(int i=0; i<size; i++)
        {
            Node *node=q.front();
            q.pop();
        
            if(node->left!=NULL) 
                q.push(node->left);
            if(node->right!=NULL) 
                q.push(node->right);
            
            level.push_back(node->data);
        }
        if(a==1)
        {
            for(int i=0; i<level.size(); i++)
            {
                ans.push_back(level[i]);
                a=0;
            }
        }
        else
        {
            for(int i=level.size()-1; i>=0; i--)
            {
                ans.push_back(level[i]);
                a=1;
            }
        }
    }
    return ans;
}