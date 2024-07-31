#include <iostream>
#include <vector>
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


void levelorder(node* root, vector<vector<int>> &arr){
    if(!root) return;

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        int size = q.size();
        vector<int> temp(size);

        for(int i=0;i<size;i++){
            node* ele = q.front();
            q.pop();

            temp[i] = ele->data;

            if(ele->left) q.push(ele->left);
            if(ele->right) q.push(ele->right);
        }

        arr.push_back(temp);
    }
}


int main() {

    node* root = NULL;
    root = createTree(root);

    vector<vector<int>> arr;
    levelorder(root,arr);

    for(auto i : arr){
        for(int j : i) cout<<j<<" ";
        cout<<endl;
    }

    
    return 0;
}