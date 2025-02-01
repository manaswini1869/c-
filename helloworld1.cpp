#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

namespace first{
    int m = 1;
};

namespace second{
    int m = 2;
}

int main() {
    // This is a comment
    /*
    This is a
    multi-line comment
    */
    std::cout << "I like Pizza!" << "\n"; // standard character output
    std::cout << "Its really good" << std::endl; // endl end of line; end line will flush the output buffer

    // declaring a variable
    int x; // declaration
    x = 5; // assignment
    int y = 6;
    int sum = x + y;
    std::cout << x << y << "\n";
    std::cout << sum;

    // double
    double d = 3.14;
    double price = 10.99;

    // char
    char c = 'A'; // char can store only a single character
    char initial = 'C';
    char currency = '$';

    // boolean
    bool isTrue = true;
    bool isFalse = false;

    // string (string is an object that represents a sequence of text)
    std::string name = "Manaswini";
    std::string day = "Friday";
    std::string food = "pizza";
    std::cout << "\n" << name;
    std::cout << "\n" << "Hello " << name;

    //const keyword tells the compiler that a variable value is constant
    // tells the compiler to prevent anything from modifying it (read-only)
    const double PIE = 3.14159;
    double radius = 10;
    double circumference = 2 * PIE * radius;
    const int LIGHT_SPEED = 299792458;
    std::cout << "\n" << circumference << "cm";

    // Namespace = provides a solution for preventing name conflicts ni large projects. Each entity needs a
    // unique name. A namespace allows for identically name entities as long as the namespaces are different
    using namespace first;
    // int m = 0;
    std::cout << "\n" << "Printing x " <<m; // if not declared explicitly we will be using the local version of the variable

    std:: cout << m; // the double colon here is the scope resolution

    // typedef = reserved keyword used to create an additional name (alias) for another date type. New identifier for
    // an existing type. Helps with readability and reduces types
    // helps in code readability and helps in typos
    pairlist_t pairlist;
    text_t hello = "Hello World!";
    std::cout << "\n" << hello;
    number_t age = 22;
    std::cout << "\n" << age;

    return 0;
}