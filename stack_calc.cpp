#include <iostream>
#include <string>
#include <stack>
#include <math.h>

using namespace std;

// Function to perform the calculation and take in any length of numbers and expressions 
double calculate(string expression) {
    stack<double> numbers;
    stack<char> opera;

    for (char c : expression) {
        if (isspace(c)) {
            continue;  // Skip whitespace
        }
//checking for decimal in a given number
        if (isdigit(c) || (c == '.')) {
            double num;
            cin.putback(c);
            cin >> num;
            numbers.push(num);
//Error handling and operand initialization 
        } else if (c == '(') {
            opera.push(c);
        } else if (c == ')') {
            while (!opera.empty() && opera.top() != '(') {
                char op = opera.top();
                opera.pop();
                double operand2 = numbers.top();
                numbers.pop();
                double operand1 = numbers.top();
                numbers.pop();
                if (op == '+') {
                    numbers.push(operand1 + operand2);
                } else if (op == '-') {
                    numbers.push(operand1 - operand2);
                } else if (op == '*') {
                    numbers.push(operand1 * operand2);
                } else if (op == '/') {
                    if (operand2 != 0) {
                        numbers.push(operand1 / operand2);
                    } else {
                        cerr << "Error: Division by zero" << endl;
                        exit(1);
                    }
                } else if (op == '%') {
                    if (operand2 != 0) {
                        numbers.push(fmod(operand1, operand2));
                    } else {
                        cerr << "Error: Modulo by zero" << endl;
                        exit(1);
                    }
                }
            }
            if (!opera.empty() && opera.top() == '(') {
                opera.pop();  // Pop the opening parenthesis
            } else {
                cerr << "Error: Mismatched parentheses" << endl;
                exit(1);
            }
//I will stop here since i do not want to over implement saw your message om dicord a little late but i just wanted to reduce some work load for everyone since i couldnt sleep😂

    
//Main
int main() {
    string expression;
    cout << "Enter an expression to evaluate: ";
    getline(cin, expression);
    double result = calculate(expression);
    cout << "Result: " << result << endl;
    return 0;
}
