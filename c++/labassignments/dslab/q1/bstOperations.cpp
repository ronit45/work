#include <bits/stdc++.h>
#include "defOperations.h"
using namespace std;

int main() 
{
    Node* root = nullptr;
    int choice;

    while (true) {
        cout << "\nBinary Tree Operations Menu:\n";
        cout << "1. Construct a binary tree\n";
        cout << "2. Inorder Traversal\n";
        cout << "3. Preorder and Postorder Traversal\n";
        cout << "4. Find Leaf Nodes\n";
        cout << "5. Find Height of Tree\n";
        cout << "6. Delete Last Node\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                root = constructTree();
                break;
            case 2:
                cout << "Inorder Traversal: ";
                inorderTraversal(root);
                cout << endl;
                break;
            case 3:
                cout << "Preorder Traversal: ";
                preorderTraversal(root);
                cout << "\nPostorder Traversal: ";
                postorderTraversal(root);
                cout << endl;
                break;
            case 4:
                findLeafNodes(root);
                break;
            case 5:
                cout << "Height of Tree: " << findHeight(root) << endl;
                break;
            case 6:
                root = deleteLastNode(root);
                cout << "Last node deleted.\n";
                break;
            default:
                cout << "Invalid choice!\n";
                exit(0);
        }
    }
    return 0;
}