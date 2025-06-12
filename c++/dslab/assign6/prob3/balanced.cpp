#include <iostream>
#include <fstream>
#include <stack>
#include <vector>

using namespace std;

// Function to check if two parentheses are matching pairs
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check if the parentheses in the file are balanced
bool areParenthesesBalanced(const string& filename) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        cerr << "Error: Could not open the file " << filename << endl;
        return false;
    }

    stack<char> s;  // Stack to hold the opening parentheses
    char ch;

    // Read file character by character
    while (file.get(ch)) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);  // Push the opening parentheses onto the stack
        } else if (ch == ')' || ch == '}' || ch == ']') {
            // If we encounter a closing parenthesis and the stack is empty, it means there is no corresponding opening parenthesis
            if (s.empty() || !isMatchingPair(s.top(), ch)) {
                return false;  // Unbalanced parentheses
            }
            s.pop();  // Pop the opening parenthesis as it matches with the closing one
        }
    }

    // If the stack is empty, parentheses are balanced; otherwise, they are unbalanced
    return s.empty();
}

int main() {
    // List of input filenames
    vector<string> filenames = {"parinp", "parinp0", "parinp1", "parinp2"};
    
    // Iterate over each file and check if parentheses are balanced
    for (const auto& filename : filenames) {
        cout << "Checking file: " << filename << endl;
        if (areParenthesesBalanced(filename)) {
            cout << "Parentheses in " << filename << " are balanced!" << endl;
        } else {
            cout << "Parentheses in " << filename << " are NOT balanced!" << endl;
        }
        cout << endl;  // Line break for clarity
    }

    return 0;
}
