#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of the stack

// Structure to represent a stack
struct Stack {
    int top;               // Keeps track of the top element index
    int elements[MAX];      // Array to store stack elements
};

// Function to initialize the stack
void initializeStack(Stack &s) {
    s.top = -1;  // Stack is initially empty
}

// Function to check if the stack is empty
bool isEmpty(Stack &s) {
    return s.top == -1;
}

// Function to check if the stack is full
bool isFull(Stack &s) {
    return s.top == MAX - 1;
}

// Function to push an element onto the stack
void push(Stack &s, int value) {
    if (isFull(s)) {
        cout << "Stack overflow! Cannot push " << value << endl;
        return;
    }
    s.elements[++s.top] = value;  // Increment top and add value to the stack
    cout << "Pushed " << value << " onto the stack." << endl;
}

// Function to pop an element from the stack
int pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack underflow! Cannot pop." << endl;
        return -1;  // Return -1 to indicate an error
    }
    return s.elements[s.top--];  // Return top element and decrement top
}

// Function to get the top element of the stack
int peek(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack is empty." << endl;
        return -1;  // Return -1 to indicate an error
    }
    return s.elements[s.top];
}

// Function to display the elements of the stack
void display(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= s.top; i++) {
        cout << s.elements[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack stack;
    initializeStack(stack);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    cout << "Top element is: " << peek(stack) << endl;

    display(stack);

    cout << "Popped element: " << pop(stack) << endl;

    display(stack);

    return 0;
}
