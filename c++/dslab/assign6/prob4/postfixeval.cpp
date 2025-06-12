#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

// Function to check if a string is an operator
bool isOperator(const string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/" || token == "%";
}

// Function to perform a given operation on two operands
int performOperation(int operand1, int operand2, const string& op) {
    if (op == "+") return operand1 + operand2;
    if (op == "-") return operand1 - operand2;
    if (op == "*") return operand1 * operand2;
    if (op == "/") return operand1 / operand2;
    if (op == "%") return operand1 % operand2;

    cerr << "Error: Unknown operator " << op << endl;
    return 0;
}

// Function to evaluate a postfix expression
int evaluatePostfix(const string& expression) {
    stack<int> s;  // Stack to store operands
    stringstream ss(expression);  // Use stringstream to tokenize the expression
    string token;

    // Process each token in the expression
    while (ss >> token) {
        if (isOperator(token)) {
            // Pop two operands from the stack
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();

            // Perform the operation and push the result back onto the stack
            int result = performOperation(operand1, operand2, token);
            s.push(result);
        } else {
            // The token is an operand, convert it to an integer and push it onto the stack
            s.push(stoi(token));
        }
    }

    // The final result is the only value left in the stack
    return s.top();
}

// Function to read postfix expression from a file and evaluate it
void processFile(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return;
    }

    string expression;
    while (getline(file, expression)) {
        cout << "Postfix Expression: " << expression << endl;
        int result = evaluatePostfix(expression);
        cout << "Result: " << result << endl << endl;
    }

    file.close();
}

int main() {
    // List of input filenames
    vector<string> filenames = {
        "postfix_inp1", 
        "postfix_inp2", 
        "postfix_inp3", 
        "postfix_inp4", 
        "postfix_inp5"
    };

    // Process each file
    for (const auto& filename : filenames) {
        cout << "Processing file: " << filename << endl;
        processFile(filename);
        cout << "---------------------------------" << endl;
    }

    return 0;
}