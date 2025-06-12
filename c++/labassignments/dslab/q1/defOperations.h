#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

Node* constructTree() {
    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data == -1) return nullptr;

    Node* newNode = new Node(data);
    
    cout << "Enter left child of " << data << ": ";
    newNode->left = constructTree();

    cout << "Enter right child of " << data << ": ";
    newNode->right = constructTree();

    return newNode;
}

void inorderTraversal(Node* root) {
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " -> ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
    if(root == nullptr) return;
    cout << root->data << " -> ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if(root == nullptr) return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    cout << root->data << " -> ";
}

void findLeafNodes(Node* root) {
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) {
        cout << "Root data: " << root->data << "\t";
    }
    findLeafNodes(root->left);
    findLeafNodes(root->right);
}

int findHeight(Node* root) {
    if(root == nullptr) return 0;
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + max(leftHeight, rightHeight);
}

Node* deleteLastNode(Node* root) {
    if (root == nullptr) return nullptr;

    if (root->left == nullptr && root->right == nullptr) {
        delete root;
        return nullptr;
    }

    if (root->right) {
        root->right = deleteLastNode(root->right);
    } else if (root->left) {
        root->left = deleteLastNode(root->left);
    }

    return root;
}