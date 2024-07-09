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
    cout<<endl;

    root = new node(val);

    if(val == -1){
        return NULL;
    }

    cout<<"Enter the left child of "<<val<<" : ";
    root->left = buildtree(root->left);
    cout<<"Enter the right child of "<<val<<" : ";
    root->right = buildtree(root->right);

    return root;
}


void inorder(node* root){
    if(!root){
        return;
    }
    
    stack<node*> st;
    node* curr = root;
    st.push(curr);
  

    while(!st.empty()){
        if(!curr){
            st.pop();
            node* x = st.top();     
            st.pop();
            cout<<x->data<<" ";
            curr = x->right;
            st.push(x->right);
        }
        else{
            st.push(curr->left);
            curr=curr->left;
        }
    }

}


int main() {
    
    node* root = NULL;
    root = buildtree(root);
    cout<<endl<<endl;
    inorder(root);


    return 0;
}