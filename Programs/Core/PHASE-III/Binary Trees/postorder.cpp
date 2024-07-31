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


void postorder(node* root){
    if(!root){
        return;
    }
    
    stack<node*> a;
    stack<node*> b;
    a.push(root);
                             
    while(!a.empty()){
        node* ele = a.top();
        a.pop();
        b.push(ele);

        if(ele->left){
            a.push(ele->left);
        }   
        if(ele->right){
             a.push(ele->right);
        }
    }

    while(!b.empty()){
        cout<<b.top()->data<<" ";
        b.pop();
    }

}


int main() {
    
    node* root = NULL;
    root = buildtree(root);
    cout<<endl<<endl;
    postorder(root);


    return 0;
}