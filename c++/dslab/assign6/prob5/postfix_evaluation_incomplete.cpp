#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // for isdigit function
#include <fstream> // for file handling

using namespace std;

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return 0;
}

// Function to convert infix expression to postfix
string infixToPostfix(const string& infix) {
    stack<char> s;  // Stack to hold operators
    string postfix;  // Output string for postfix expression

    for (char ch : infix) {
        if (isspace(ch)) {
            continue; // Ignore spaces
        }

        // If the character is an operand, add it to output
        if (isdigit(ch) || isalpha(ch)) {
            postfix += ch;  // Append operand to output
        }
        // If the character is an operator
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            // Pop from stack to output while the top of the stack has the same or higher precedence
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top();  // Append operator to output
                s.pop();
            }
            s.push(ch);  // Push the current operator onto the stack
        }
    }

    // Pop all the remaining operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Function to process the input file and convert infix expressions to postfix
void processFile(const string& filename) {
    ifstream file(filename); // Open the input file

    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return;
    }

    string infix;
    // Read each line (infix expression) from the file
    while (getline(file, infix)) {
        // Convert to postfix
        string postfix = infixToPostfix(infix);
        // Output the postfix expression
        cout << "Infix expression: " << infix << endl;
        cout << "Postfix expression: " << postfix << endl << endl;
    }

    file.close(); // Close the file
}

int main() {
    // List of input filenames
    string filenames[] = { "infix_inp1", "infix_inp2", "infix_inp3" };

    // Process each file
    for (const auto& filename : filenames) {
        cout << "Processing file: " << filename << endl;
        processFile(filename);
        cout << "---------------------------------" << endl;
    }

    return 0;
}
