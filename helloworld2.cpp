#include <iostream>
#include <cmath>

int main() {
     // arithmetic operators
     int students = 20;
    //  students += 1;
    // students --;
    // students = students * 2;
    students %=  3;
     std::cout << students << "\n";

    // type conversion = conversion of a value of one data type to another
    // implicit = automatic
    // explicit = precode value with new data type (int)

    double x = (int) 3.14;
    std::cout << x << "\n";

    int correct = 8;
    int question = 10;
    std::cout << (double) correct / question * 100 << " %" << "\n";

    // user input
    // cin >> (extraction operator)
    // std::string name;
    // int age;
    // std::cout << "Enter your name: ";
    // std::getline(std::cin >> std::ws, name); // std::ws will ignore any white spaces or any of the new line input
    // std::cout << "What's your age? ";
    // std::cin >> age;
    // std::cout << "Hello, " << name << "\n";
    // std::cout << "You are " << age << " years old.\n";

    //
    double r = 3.99;
    double y = 4;
    double z;
    // z = std::max(r, y);
    // z = std::min(r, y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(-8);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);
    std::cout << z << "\n";

}