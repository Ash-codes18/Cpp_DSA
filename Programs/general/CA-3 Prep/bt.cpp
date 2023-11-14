#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }
    if (root->left == nullptr) {
        root->left = insert(root->left, value);
    } else if (root->right == nullptr) {
        root->right = insert(root->right, value);
    } else {
        // You can customize the insertion logic here, e.g., inserting in a balanced way.
        // For simplicity, this code inserts the value in the left subtree.
        root->left = insert(root->left, value);
    }
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;
    cout << "Let's create a binary tree. Enter integer values or type 'exit' to finish." << endl;

    while (true) {
        string input;
        cin >> input;

        if (input == "exit") {
            break;
        }

        try {
            int value = stoi(input);
            root = insert(root, value);
        } catch (const invalid_argument& e) {
            cout << "Please enter a valid integer or 'exit' to finish." << endl;
        }
    }

    cout << "Inorder traversal of the binary tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
