#include <iostream>
#include <queue>
using namespace std;

// inp ex : 9 7 5 -1 -1 8 -1 -1 11 10 -1 -1 12 -1 -1

class node{

public:

    int data;
    node *left;
    node *right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

node* createTree(node* root){

    cout<<"Enter data: ";
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter left child of "<<data<<endl;
    root->left = createTree(root->left);

    cout<<"Enter right child of "<<data<<endl;
    root->right = createTree(root->right);

    return root;
}


int countleaves(node* root){

    if(root == NULL){
        return 0;
    }

    int count = 0;

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(!temp->left && !temp->right) count++;

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

return count;

}


int main() {

    node *root = NULL;
    root = createTree(root);
    cout<<endl<<endl;
    cout<<"No. of leaf nodes in the tree = "<<countleaves(root)<<endl;

    
    return 0;
}