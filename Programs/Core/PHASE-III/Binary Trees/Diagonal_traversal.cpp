#include <iostream>
#include <vector>
#include <map>
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


void diagonalOrder(node* root,map<int,vector<int>> &mp, int left, int right){
    if(!root) return;
    
    mp[left].push_back(root->data);
    
    diagonalOrder(root->left,mp,left+1,right);
    diagonalOrder(root->right,mp,left,right+1);
}


int main() {

    node *root = NULL;
    root = createTree(root);
    
    map<int,vector<int>> mp;
    diagonalOrder(root,mp,0,0);
    
    for(auto i : mp){
        for(int j : i.second){
            cout<<j<<" ";
        }
    }

    
    return 0;
}