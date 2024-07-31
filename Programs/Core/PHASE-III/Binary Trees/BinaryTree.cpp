#include <iostream>
#include <queue>
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


void levelorder(node* root){

    if(root == NULL){
        return;
    }

    //Here Null is used as a Seperator to identify the level

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp != NULL){
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        else if(!q.empty()){
            cout<<endl;
            q.push(NULL);
        }
    }
}



void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(!root) return;


    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main() {

    node *root = NULL;
    root = createTree(root);
    levelorder(root);
    cout<<endl<<endl;
    preorder(root);
    cout<<endl<<endl;
    inorder(root);
    cout<<endl<<endl;
    postorder(root);
    cout<<endl<<endl;
    
    return 0;
}