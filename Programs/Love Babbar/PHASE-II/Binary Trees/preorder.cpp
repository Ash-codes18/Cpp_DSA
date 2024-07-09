#include <iostream>
#include <stack>
using namespace std;


class node{

public: 
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }

};


node* buildtree(node* root){
    
    int val;
    cout<<"Enter data : ";
    cin>>val;
    root = new node(val);

    if(val==-1){
        return NULL;
    }


    cout<<"Enter left child of "<<val<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter right child of"<<val<<endl;
    root->right = buildtree(root->right);

    return root;
}


void preorder(node* root){

    stack<node*> st;
    st.push(root);

    while(!st.empty()){
        node* ele = st.top();
        st.pop();
        cout<<ele->data<<" ";
        if(ele->right){
            st.push(ele->right);
        }
        if(ele->left){
            st.push(ele->left);
        }
    }

}


int main() {

    node *root = NULL;
    root = buildtree(root);
    cout<<endl<<endl;
    cout<<"Preorder traversal : "<<endl;
    preorder(root);
    cout<<endl<<endl;
    
    return 0;
}