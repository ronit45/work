#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    // Example function that adds a node to the list
    ListNode* addToList(int digit) {
        ListNode* temp = new ListNode(digit); // Creating a new node
        // Additional logic for an empty list or appending can go here
        return temp;
    }

    // Any other functions you may have
};

int main() {
    Solution sol;
    ListNode* node = sol.addToList(5);
    std::cout << "Node value: " << node->val << std::endl;

    // Clean up to avoid memory leaks
    delete node;
    return 0;
}
