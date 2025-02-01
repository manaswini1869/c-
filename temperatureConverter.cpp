#include <iostream>

int main() {

    double temp;
    char unit;
    std::cout << "************** Temperature Converter ******************\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit you would like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit =='f') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;
        std::cout << "Temperature in Fahrenheit: " << (1.8 * temp) + 32.0 << "\n";
    } else if (unit == 'C' || unit =='c') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;
        std::cout << "Temperature in Celsius: " << (temp - 32.0) / 1.8 << "\n";
    } else {
        std::cout << "Invalid unit. Please enter F or C.\n";
    }

    std::cout << "********************************************************\n";

    return 0;
}