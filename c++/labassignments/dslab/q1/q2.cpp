#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node *left, *right;
    Node(char val) {
        data = val;
        left = right = nullptr;
    }
};

int search(char inorder[], int start, int end, char value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value)
            return i;
    }
    return -1;
}

Node* buildTree(char inorder[], char preorder[], int inorderStart, int inorderEnd, int& preorderIndex) {

    if (inorderStart > inorderEnd) return nullptr;
    char rootValue = preorder[preorderIndex++];
    Node* root = new Node(rootValue);

    if (inorderStart == inorderEnd) {
        return root;
    }

    int inorderIndex = search(inorder, inorderStart, inorderEnd, rootValue);

    root->left = buildTree(inorder, preorder, inorderStart, inorderIndex - 1, preorderIndex);
    root->right = buildTree(inorder, preorder, inorderIndex + 1, inorderEnd, preorderIndex);

    return root;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    char inorder[] = {'E', 'A', 'C', 'K', 'F', 'H', 'D', 'B', 'G'};
    char preorder[] = {'F', 'A', 'E', 'K', 'C', 'D', 'H', 'G', 'B'};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    int preorderIndex = 0;  

    Node* root = buildTree(inorder, preorder, 0, n - 1, preorderIndex);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    return 0;
}