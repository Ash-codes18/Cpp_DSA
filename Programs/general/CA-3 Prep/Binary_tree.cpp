#include <iostream>
using namespace std;

class node{

    public:
        int data;
        node* left;
        node* right;

        node(int d){

            this-> data = d;
            this-> left = NULL;
            this-> right = NULL;

        }

};


node* buildtree(node* root){

cout<<"Enter the data ";
int data;
cin>>data;
 
root = new node(data);

if(data==-1){
    return NULL;
}

cout<<"Enter the data for inserting in left of : "<<data<<endl;
root->left = buildtree(root->left);
cout<<"Enter the data for inserting in right of : "<<data<<endl;
root->right = buildtree(root->right);
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

    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}




int main(){

    node* root= NULL;
    root = buildtree(root);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    // values = 1 3 5 -1 -1 7 -1 -1 9 11 -1 -1 13 -1 -1

    return 0;
}