// void is being used as the return type for some functions only when those functions are meant to perform operations that directly display results to the console, rather than returning a value that needs to-
// - be used elsewhere in the program.

// double is being used to represent floating-point numbers with double the precision of float

#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
int addition(int operand1, int operand2);
int subtraction(int operand1, int operand2);
int multiplication(int operand1, int operand2);
int division(int operand1, int operand2);
int modulus(int operand1, int operand2);
int exponent(int operand1, int operand2);
int sin_func(int operand);
int asin_func(int operand);
int cos_func(int operand);
int acos_func(int operand);
int tan_func(int operand);
int atan_func(int operand);
int atan2_func(int operand1, int operand2);
int sqrt_func(int operand);
int ceil_func(int operand);
int abs_func(int operand);
int floor_func(int operand);
int max_func(int operand1, int operand2);
int min_func(int operand1, int operand2);
int log_func(int operand);
int log10_func(int operand);
int log2_func(int operand);
int round_func(double operand);

// Function prototypes for display
void displayResult(int result);

int main() {
    string operation;
    int operand1, operand2;

    cout << "Enter the operation you want to perform (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
    cin >> operation;

    if (operation == "sin" || operation == "asin" || operation == "cos" || operation == "acos" || operation == "tan" || operation == "atan" || operation == "atan2" || operation == "sqrt" || operation == "ceil" || operation == "abs" || operation == "floor" || operation == "max" || operation == "min" || operation == "log" || operation == "log10" || operation == "log2" || operation == "round") {
        cout << "Enter the operand: ";
        cin >> operand1;

        if (operation == "sin") {
            displayResult(sin_func(operand1));
        }
        else if (operation == "asin") {
            displayResult(asin_func(operand1));
        }
        else if (operation == "cos") {
            displayResult(cos_func(operand1));
        }
        else if (operation == "acos") {
            displayResult(acos_func(operand1));
        }
        else if (operation == "tan") {
            displayResult(tan_func(operand1));
        }
        else if (operation == "atan") {
            displayResult(atan_func(operand1));
        }
        else if (operation == "atan2") {
            cout << "Enter the second operand: ";
            cin >> operand2;
            displayResult(atan2_func(operand1, operand2));
        }
        else if (operation == "sqrt") {
            displayResult(sqrt_func(operand1));
        }
        else if (operation == "ceil") {
            displayResult(ceil_func(operand1));
        }
        else if (operation == "abs") {
            displayResult(abs_func(operand1));
        }
        else if (operation == "floor") {
            displayResult(floor_func(operand1));
        }
        else if (operation == "max") {
            cout << "Enter the second operand: ";
            cin >> operand2;
            displayResult(max_func(operand1, operand2));
        }
        else if (operation == "min") {
            cout << "Enter the second operand: ";
            cin >> operand2;
            displayResult(min_func(operand1, operand2));
        }
        else if (operation == "log") {
            displayResult(log_func(operand1));
        }
        else if (operation == "log10") {
            displayResult(log10_func(operand1));
        }
        else if (operation == "log2") {
            displayResult(log2_func(operand1));
        }
        else if (operation == "round") {
            double doubleOperand;
            cout << "Enter the operand: ";
            cin >> doubleOperand;
            displayResult(round_func(doubleOperand));
        }
        else {
            cout << "Invalid operation!" << endl;
        }
    }
    else {
        cout << "Enter the first operand: ";
        cin >> operand1;
        cout << "Enter the second operand: ";
        cin >> operand2;

        switch (operation[0]) {
        case '+':
            displayResult(addition(operand1, operand2));
            break;
        case '-':
            displayResult(subtraction(operand1, operand2));
            break;
        case '*':
            displayResult(multiplication(operand1, operand2));
            break;
        case '/':
            if (operand2 != 0) {
                displayResult(division(operand1, operand2));
            }
            else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case '%':
            displayResult(modulus(operand1, operand2));
            break;
        case '^':
            displayResult(exponent(operand1, operand2));
            break;
        default:
            cout << "Invalid operation!" << endl;
        }
    }

    return 0;
}

// Function definitions
int addition(int operand1, int operand2) {
    return operand1 + operand2;
}

int subtraction(int operand1, int operand2) {
    return operand1 - operand2;
}

int multiplication(int operand1, int operand2) {
    return operand1 * operand2;
}

int division(int operand1, int operand2) {
    return operand1 / operand2;
}

int modulus(int operand1, int operand2) {
    return operand1 % operand2;
}

int exponent(int operand1, int operand2) {
    return pow(operand1, operand2);
}

int sin_func(int operand) {
    return sin(operand);
}

int asin_func(int operand) {
    return asin(operand);
}

int cos_func(int operand) {
    return cos(operand);
}

int acos_func(int operand) {
    return acos(operand);
}

int tan_func(int operand) {
    return tan(operand);
}

int atan_func(int operand) {
    return atan(operand);
}

int atan2_func(int operand1, int operand2) {
    return atan2(operand1, operand2);
}

int sqrt_func(int operand) {
    return sqrt(operand);
}

int ceil_func(int operand) {
    return ceil(operand);
}

int abs_func(int operand) {
    return abs(operand);
}

int floor_func(int operand) {
    return floor(operand);
}

int max_func(int operand1, int operand2) {
    return max(operand1, operand2);
}

int min_func(int operand1, int operand2) {
    return min(operand1, operand2);
}

int log_func(int operand) {
    return log(operand);
}

int log10_func(int operand) {
    return log10(operand);
}

int log2_func(int operand) {
    return log2(operand);
}

int round_func(double operand) {
    return round(operand);
}

// Display function definition
void displayResult(int result) {
    cout << "Result: " << result << endl;
}