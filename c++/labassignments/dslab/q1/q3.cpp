#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node *left, *right;
    Node(string val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, string data) {
    if (root == nullptr) return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

Node* findMin(Node* root) {
    while (root && root->left != nullptr)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, string key) {
    if (root == nullptr) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int searchComparisons(Node* root, string key) {
    int comparisons = 0;
    while (root != nullptr) {
        comparisons++;
        if (key == root->data) return comparisons;
        else if (key < root->data) root = root->left;
        else root = root->right;
    }
    return comparisons;  
}

int height(Node* root) {
    if (root == nullptr) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int balanceFactor(Node* root) {
    if (root == nullptr) return 0;
    return height(root->left) - height(root->right);
}

void displayBalanceFactors(Node* root) {
    if (root == nullptr) return;
    displayBalanceFactors(root->left);
    cout << "Node: " << root->data << ", Balance Factor: " << balanceFactor(root) << endl;
    displayBalanceFactors(root->right);
}

Node* createInitialBST() {
    string data[] = {"LINUX", "OS2", "DOS", "XENIX", "SOLARIS", "WINDOWS", "VISTA", "XP", "UNIX", "CPM"};
    Node* root = nullptr;
    for (string s : data) {
        root = insert(root, s);
    }
    return root;
}

int main() {
    Node* root = createInitialBST();
    int choice;
    string key;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert MAC\n";
        cout << "2. Delete WINDOWS\n";
        cout << "3. Delete UNIX\n";
        cout << "4. Delete root node\n";
        cout << "5. Display inorder (sorted) traversal\n";
        cout << "6. Number of comparisons for LINUX, XENIX, DOS, UNIX, CPM\n";
        cout << "7. Display balance factors of all nodes\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                root = insert(root, "MAC");
                cout << "Inserted MAC\n";
                break;
            case 2:
                root = deleteNode(root, "WINDOWS");
                cout << "Deleted WINDOWS\n";
                break;
            case 3:
                root = deleteNode(root, "UNIX");
                cout << "Deleted UNIX\n";
                break;
            case 4:
                if (root) {
                    cout << "Deleted root node: " << root->data << endl;
                    root = deleteNode(root, root->data);
                } else {
                    cout << "Tree is empty\n";
                }
                break;
            case 5:
                cout << "Inorder (sorted) traversal: ";
                inorderTraversal(root);
                cout << endl;
                break;
            case 6: {
                string keys[] = {"LINUX", "XENIX", "DOS", "UNIX", "CPM"};
                for (string k : keys) {
                    cout << "Comparisons to find " << k << ": " << searchComparisons(root, k) << endl;
                }
                break;
            }
            case 7:
                cout << "Balance Factors:\n";
                displayBalanceFactors(root);
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (choice != 8);

    return 0;
}