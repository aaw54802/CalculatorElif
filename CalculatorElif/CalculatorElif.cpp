// CalculatorElif.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    int num1, num2;
    char oper;

    cout << "Enter the Expression: ";
    cin >> num1 >> oper >> num2;

    

    if (oper == '+') {
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    }
    else if (oper == '-') {
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    }
    else if (oper == '*' || oper == 'x') {
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    }
    else if (oper == '%' || oper == '/') {
        if (num2 == 0) {
            cout << "Cannot divide by zero" << endl;
            return 1;
        }
        cout << num1 << "/" << num2 << "=" << num1 / (num2 + 0.0) << endl;
        //"num2 + 0.0" lets answer be float so division asnwer isn't incorret
    }
    else
        cout << "Your input contains an Error" << endl;
        return 1;

    return 0;
}
