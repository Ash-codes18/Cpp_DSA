#include <iostream>
#include <queue>
using namespace std;

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


node* buildtree(node* root){

    int val;
    cout<<"Enter data : ";
    cin>>val;
    cout<<endl;

    root = new node(val);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* ele = q.front();
        q.pop();

        int left;
        cout<<"Enter the left child of "<<ele->data<<" : ";
        cin>>left;

        if(left!=-1){
            node* temp = new node(left);
            ele->left = temp;
            q.push(temp);
        }
        

        int right;
        cout<<"Enter the right child of "<<ele->data<<" : ";
        cin>>right;
        cout<<endl;

        if(right!=-1){
            node* temp = new node(right);
            ele->right = temp;
            q.push(temp);
        }

    }
    
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




int main() {

    node* root = NULL;
    root = buildtree(root);
    levelorder(root);

    
    return 0;
}