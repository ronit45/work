// operation_bst.h
#ifndef OPERATION_BST_H
#define OPERATION_BST_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct BSTNode {
    string word;
    BSTNode* left;
    BSTNode* right;
    
    BSTNode(const string& w) : word(w), left(nullptr), right(nullptr) {}
};

void toLowerCase(string& word) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
}

BSTNode* insert_bst(BSTNode* root, const string& word) {
    if (root == nullptr) {
        return new BSTNode(word);
    }
    if (word < root->word) {
        root->left = insert_bst(root->left, word);
    } else if (word > root->word) {
        root->right = insert_bst(root->right, word);
    }
    return root;
}

int compare_bst(BSTNode* root, const string& word) {
    int comparisons = 0;
    while (root != nullptr) {
        comparisons++;
        if (word == root->word) {
            return comparisons; 
        } else if (word < root->word) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return -comparisons;  
}
string input_word() {
    string word;
    cout << "Enter a word to search: ";
    cin >> word;
    toLowerCase(word);
    return word;
}
void inOrderTraversal(BSTNode* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    cout << root->word << " ";
    inOrderTraversal(root->right);
}

#endif
