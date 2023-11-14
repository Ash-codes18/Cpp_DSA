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


node* insertBST(node* root, int val){

    if(root==NULL){
        return new node(val);
    }

    if(val<root->data){
        root->left = insertBST(root->left,val);
    }

    else{
        root->right=insertBST(root->right,val);
    }

    return root;

}

void inorder(node *root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}



int main(){

    
    node *root=NULL;
    int d;

    for(int i=0;i<6;i++){
        cin>>d;
        root=insertBST(root,d);
    }

    inorder(root);



    return 0;
}