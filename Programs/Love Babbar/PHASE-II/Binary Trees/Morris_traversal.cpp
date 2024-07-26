#include <iostream>
#include <vector>
using namespace std;

// ex : 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 -1 8 -1 -1


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


void morrisinorder(node* root){
    vector<int> inorder;
    node* curr = root;

    while(curr){
        if(!curr->left){
            inorder.push_back(curr->data);
            curr = curr->right;
        } 
        else{
            node* prev = curr->left;
            while(prev->right && prev->right != curr){
                prev = prev->right;
            }

            if(!prev->right){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                inorder.push_back(curr->data);
                curr = curr->right;
            }
        }
    }

    for(int i : inorder) cout<<i<<" ";

}



void morrispreorder(node* root){
    vector<int> preorder;
    node* curr = root;

    while(curr){
        if(!curr->left){
            preorder.push_back(curr->data);
            curr = curr->right;
        } 
        else{
            node* prev = curr->left;
            while(prev->right && prev->right != curr){
                prev = prev->right;
            }

            if(!prev->right){
                prev->right = curr;
                preorder.push_back(curr->data);
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }

    for(int i : preorder) cout<<i<<" ";

}


int main() {
    
    node* root = NULL;
    root = buildtree(root);
    cout<<endl<<endl;
    morrisinorder(root);
    cout<<endl<<endl;
    morrispreorder(root);


    return 0;
}