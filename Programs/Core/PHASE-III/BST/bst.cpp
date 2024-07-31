#include <iostream>
#include <vector>
using namespace std;


class node{

public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};


node* insert(node* root, int data){

    if(!root){
        root = new node(data);
        return root;
    }

    if(data>root->data){
        root->right = insert(root->right,data);
    }
    else{
        root->left = insert(root->left,data);
    }

    return root;

}

void input(node* &root){

    int data;
    cout<<"Enter data : ";
    cin>>data;

    while(data!=-1){
        root = insert(root,data);
        cin>>data;
    }

}

void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}



int main() {
    
    node* root = NULL;
    input(root);
    cout<<endl;
    inorder(root);


    return 0;
}