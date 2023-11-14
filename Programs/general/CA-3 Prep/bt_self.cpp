#include <iostream>
using namespace std;


struct node{

    int data;
    node *left, *right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }


};


node* buildtree(node *root,int val){
    
    if (root == NULL) {
        return new node(val);
    }

    if (val < root->data) {
        root->left = buildtree(root->left, val);
    } else {
        root->right = buildtree(root->right, val);
    }

    return root;

}

void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


int main(){


    node* root=NULL;
    int data;

    for(int i =0;i<5;i++){
        cin>>data;
        buildtree(root,data);
    }

    inorder(root);


    return 0;
}