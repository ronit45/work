// stack_array.h

#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>
using namespace std;

#define MAX_SIZE 100 // Define the maximum size of the stack

class Stack {
private:
    char arr[MAX_SIZE]; // Array to hold stack elements
    int top;            // Index of the top element in the stack

public:
    // Constructor
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    // Push an element onto the stack
    bool push(char elem) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack overflow" << endl;
            return false;
        }
        arr[++top] = elem; // Increment top and add element
        return true;
    }

    // Pop an element from the stack
    char pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return '\0'; // Return null char if stack is empty
        }
        return arr[top--]; // Return top element and decrement top
    }

    // Peek at the top element of the stack
    char peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return '\0'; // Return null char if stack is empty
        }
        return arr[top]; // Return top element
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

#endif
