// org_bst.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "operation_bst.h"

using namespace std;

#define FILENAME "treasure island.txt"

bool isValidWord(const string& word) {
    return word.length() >= 4;
}

BSTNode* constructBSTFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        exit(1);
    }

    BSTNode* root = nullptr;
    string word;

    while (file >> word) {
        toLowerCase(word);  
        
        if (isValidWord(word)) {
            root = insert_bst(root, word);
        }
    }

    file.close();
    return root;
}

int main() {
    BSTNode* root = constructBSTFromFile(FILENAME);

    inOrderTraversal(root);
    cout<<endl;
    string searchWord = input_word();

    int comparisons = compare_bst(root, searchWord);
    if (comparisons > 0) {
        cout << "Word '" << searchWord << "' found with " << comparisons << " comparisons." << endl;
    } else {
        cout << "Word '" << searchWord << "' not found. Number of comparisons made : " << -comparisons << endl;
    }

    return 0;
}
