#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    char op;

    std::cout << "**************************** CALCULATOR ****************************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    switch (op)
    {
    case '+':
        std::cout << "Result is: " << a + b << "\n";
        break;
    case '-':
        std::cout << "Result is: " << a - b << "\n";
        break;
    case '*':
        std::cout << "Result is: " << a * b << "\n";
        break;
    case '/':
        std::cout << "Result is: " << a / b << "\n";
        break;
    default:
        std::cout << "Please enter a valid operator (+ - * /)" << "\n";
        break;
    }

    std::cout << "********************************************************************\n";


    return 0;
}