#include <iostream>
#include <vector>
using namespace std;


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

bool leaf(node* root){
    return (!root->right && !root->left);
}

void traverseLeft(node* root, vector<int> &arr){
    
    if(!root) return;

    while(root){
        if(!leaf(root)) arr.push_back(root->data);
        if(root->left) root = root->left;
        else root = root->right;
    }
    
}

void leaves(node* root, vector<int> &arr){
    if(!root) return;

    leaves(root->left,arr);
    if(leaf(root)) arr.push_back(root->data);
    leaves(root->right,arr);

}

void traverseRight(node* root, vector<int> &arr){
    
    if(!root) return;

    if(root->right) traverseRight(root->right,arr);
    else traverseRight(root->left,arr);

    if(!leaf(root)) arr.push_back(root->data);
}

void boundaryTraversal(node* root, vector<int> &arr){
    if(!root) return;
    if(!leaf(root)) arr.push_back(root->data);
    
    traverseLeft(root->left,arr);
    leaves(root,arr);
    traverseRight(root->right,arr);
}



int main() {

    node* root = NULL;
    root = createTree(root);
    vector<int> arr;

    boundaryTraversal(root,arr);

    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;
}