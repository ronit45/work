#ifndef STACK_LINKED_H
#define STACK_LINKED_H
#include <iostream>
using namespace std;
typedef int item_type;  

// Define the node structure
struct Node {
    item_type data;   
    Node* next;       
};

class Stack {
private:
    Node* top;  

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (!empty()) {
            pop();
        }
    }
    void push(char value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;

        //cout << "Pushed: " << value << endl;
    }
    item_type pop() {
        if (empty()) {
            std::cerr << "Stack underflow: cannot pop from an empty stack." << std::endl;
            return -1;  
        }

        Node* temp = top;     
        item_type poppedData = top->data;  // Store the data to return
        top = top->next;      
        delete temp;          
        return poppedData;    
    }


   
    item_type peek() {
        if (empty()) {
            std::cerr << "Stack is empty: cannot peek." << std::endl;
            return -1;  // Return an error value
        }
        return top->data;  // Return the data of the top node
    }

    // Check if the stack is empty
    bool empty() {
        return top == nullptr;  // If top is nullptr, the stack is empty
    }

    // Check if the stack is full (for linked lists, this is usually false)
    bool full() {
        return false;  // A linked list stack is typically never "full"
    }
};

#endif
