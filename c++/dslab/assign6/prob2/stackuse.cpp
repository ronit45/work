#include <iostream>
#include <fstream>  // Include fstream to read files
#include "stack_linked.h"

using namespace std;

int main() {
    Stack stack;
    char ch;

    ifstream inputFile("stringinp");  // Open the input file

    if (!inputFile) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    // Read characters from the file
    while (inputFile.get(ch)) {
        if (ch != '\n' && ch != ' ') {  // Skip spaces and newlines
            cout << "Pushing: " << ch << endl;
            stack.push(ch);
        }
    }

    inputFile.close();  // Close the file after reading
    cout<<"peeking top element"<<" ";
    cout<<stack.peek()<<endl;
    cout<<"checking if stack is empty"<<" ";
    cout<<stack.empty()<<endl;
    cout << "\nPopping elements from the stack:" << endl;


    // Pop and print stack elements
    while (!stack.empty()) {
        cout << "Popped: " << (char)stack.pop() << endl;
    }


    return 0;
}
