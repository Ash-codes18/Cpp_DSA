#include <iostream>
using namespace std;

struct node{

    int data;
    node *left,*right;


    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};


node* tree(node* root){

int val;
cin>>val;


 if(root==NULL){
        return new node(val);
    }

    if(val<root->data){
        root->left = tree(root->left);
    }

    else{
        root->right=tree(root->right);
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

void preorder(node* root){

    if(root==NULL){
        return;
    }


    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root){

    if(root==NULL){
        return;
    }


    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}



int main(){

    node* root=NULL;
    tree(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}