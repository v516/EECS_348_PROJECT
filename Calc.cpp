#include <iostream>
using namespace std;


int main() {
    double num1;
    double num2;
    double ans;
    char opera;

    cout << "Enter an operator you desire (+, -, *, /): ";
    cin >> opera;

    cout << "Enter two values you want to calculate: ";
    cin >> num1 >> num2;

    switch (opera) {
        case '+':
            ans = num1 + num2;
            cout << "Sum of " << num1 << " and " << num2 << " is " << ans;
            break;

        case '-':
            ans = num1 - num2;
            cout << "Subtraction of " << num1 << " and " << num2 << " is " << ans;
            break;

        case '*':
            ans = num1 * num2;
            cout << "Multiplication of " << num1 << " and " << num2 << " is " << ans;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Cannot divide by 0";
            } else {
                ans = num1 / num2;
                cout << "Division of " << num1 << " and " << num2 << " is " << ans;
            }
            break;

        default:
            cout << "Error!! Incorrect operation selected or invalid number placement.";
            break;
    }
    return 0;
}
