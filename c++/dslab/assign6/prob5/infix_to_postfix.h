#ifndef INFIX_TO_POSTFIX_H
#define INFIX_TO_POSTFIX_H

#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // for isdigit function
#include <fstream> // for file handling

// Function to get precedence of operators
int precedence(char op);

// Function to convert infix expression to postfix
std::string infixToPostfix(const std::string& infix);

// Function to process the input file and convert infix expressions to postfix
void processFile(const std::string& filename);

#endif // INFIX_TO_POSTFIX_H
