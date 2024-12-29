#include <iostream>
using namespace std;

int main() {
    char char1;
    double num1, num2;
    char choice;
    cout<< "this is here";
    
    do {
        
        cout << "Enter operator (+, -, *, /): ";
        cin >> char1;

        // Prompt the user to enter two numbers
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Perform calculation based on the operator
        switch (char1) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                else
                    cout << "Division by zero is error!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        // Ask the user if they want to continue
        cout << "Continue for another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator program stopped." << endl;
    return 0;
}