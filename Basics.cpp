#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {
    cout << "Enter the value for Node:" << endl;
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);
    cout << "left of Node: " << root->data << endl;
    root->left = createTree();
    cout << "right of Node: " << root->data << endl;
    root->right = createTree();

    return root;
}

void preorderTraversal(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }
    // N L R
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }
    // L N R
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }
    // L R N
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = createTree();

    cout << "Printing preorder: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Printing inorder: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Printing postorder: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
