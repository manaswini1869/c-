#include <iostream>

int main() {

    // if conditions
    // int age;
    // std::cout << "Enter your age: ";
    // std::cin >> age;

    // if (age >= 18) {
    //     std::cout << "You are an adult." << std::endl;
    // } else if (age < 0) {
    //     std::cout << "Age cannot be negative." << std::endl;
    // } else {
    //     std::cout << "You are a minor." << std::endl;
    // }

    // switch

    // int month;
    // std::cout << "Enter a month (1-12): ";
    // std::cin >> month;
    // switch (month)
    // {
    // case 1:
    //     std::cout << "January" << std::endl;
    //     break;
    // case 2:
    //     std::cout << "February" << std::endl;
    //     break;
    // case 3:
    //     std::cout << "March" << std::endl;
    //     break;
    // case 4:
    //     std::cout << "April" << std::endl;
    //     break;
    // case 5:
    //     std::cout << "May" << std::endl;
    //     break;
    // case 6:
    //     std::cout << "June" << std::endl;
    //     break;
    // case 7:
    //     std::cout << "July" << std::endl;
    //     break;
    // case 8:
    //     std::cout << "August" << std::endl;
    //     break;
    // case 9:
    //     std::cout << "September" << std::endl;
    //     break;
    // case 10:
    //     std::cout << "October" << std::endl;
    //     break;
    // case 11:
    //     std::cout << "November" << std::endl;
    //     break;
    // case 12:
    //     std::cout << "December" << std::endl;
    //     break;
    // default:
    //     break;
    // }

    // ternary operator

    // int grade;

    // std::cout << "Enter your grade: ";
    // std::cin >> grade;

    // grade >= 60 ? std::cout << "You Passed!" : std::cout << "You Failed!";

    // logical operators &&, ||, !
    int temp;
    bool sunny;
    std::cout << "Whats the temperature: ";
    std::cin >> temp;
    if (temp <= 0 || temp >= 30) {
        std::cout << "Its cold" << std::endl;
    } else {
        std::cout << "Its not cold" << std::endl;
    }

    if (sunny) {
        std::cout << "Its sunny" << std::endl;
    } else {
        std::cout << "Its not sunny" << std::endl;
    }

    return 0;
}