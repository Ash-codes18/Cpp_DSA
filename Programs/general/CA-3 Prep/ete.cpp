#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left, * right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insertBST(root->left, val);
    }
    else {
        root->right = insertBST(root->right, val);
    }

    return root;
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
if(root==NULL){
    return;
}

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* searchinBST(Node* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key == root->data) {
        return root;
    }

    if (key < root->data) {
        return searchinBST(root->left, key);
    }
    else {
        return searchinBST(root->right, key);
    }
}

Node* inorderSucc(Node* root) {
    Node* curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

Node* deleteinBST(Node* root, int key) {
    if (key < root->data) {
        root->left = deleteinBST(root->left, key);
    }

    else if (key > root->data) {
        root->right = deleteinBST(root->right, key);
    }

    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteinBST(root->right, temp->data);
    }
    return root;
}


Node* Maximum(Node* root) {
    Node* curr = root;
    while (curr && curr->right != NULL) {
        curr = curr->right;
    }
    cout<< curr->data;
    return curr;
}


int main() {
    Node* root = NULL;
    int x, y;

    cout << "Enter the number of elements: " << endl;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        cin >> y;

        if (i == 1) {
            root = insertBST(root, y);
        }
        else {
            insertBST(root, y);
        }
    }

    cout << "The inorder BST is: " << endl;
    inorder(root);
    
    cout << "\nPreorder BST is: " << endl;
    preorder(root);

    cout << "\nPostorder BST is: " << endl;
    postorder(root);

    if (searchinBST(root, 10) == NULL) {
        cout << endl << "There is no such element";
    }
    else {
        cout << "Key found";
    }

    cout<<"The maximum value of the BST is: "<<endl;
    Maximum(root);

    return 0;
}