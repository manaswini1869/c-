#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    std::cout << "What is the height of the triangle? "<<std::endl;
    std::cin >> a;
    std::cout << "What is the base of the triangle? " << std::endl;
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b,2));
    std::cout << "The length of the hypotenuse is " << c << std::endl;
    return 0;
}