#include <iostream>
#include <queue>
#include <stack>
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


    if(data == -1){
        return NULL;
    }

    root = new node(data);

    cout<<"Enter left child of "<<data<<endl;
    root->left = createTree(root->left);

    cout<<"Enter right child of "<<data<<endl;
    root->right = createTree(root->right);

    return root;
}


void reverselot(node* root){

    if(!root) return;


    stack<int> st;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    

    while(!q.empty()){
        node* ele = q.front();
        q.pop();

        if(ele){
            st.push(ele->data);
        
            if(ele->left){
                q.push(ele->left);
            }
            
            if(ele->right){
                q.push(ele->right);
            }

        }

        else if(!q.empty()){
            q.push(NULL);
            st.push(-1);
        }
    }

    cout<<endl<<"SIze of stack : "<<st.size()<<endl;

    while(!st.empty()){
        if(st.top()==-1) cout<<endl;
        else cout<<st.top()<<" ";

        st.pop();
    }

}


int main() {

    node* root = NULL;
    root = createTree(root);
    cout<<endl<<endl;
    reverselot(root);

    
    return 0;
}