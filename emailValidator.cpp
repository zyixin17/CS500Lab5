#include "emailValidator.h"
#include <regex>
#include <iostream>

bool emailValidator(std::string s) {
    // Regex
    std::regex email("^[a-zA-Z0-9]{1,20}\\.[a-zA-Z!$&]+@[a-z]{1,20}\\.[a-z]{1,3}$");
    return std::regex_match(s, email);
}

void printEmailValidator(std::string s) {
    // Print
    if (emailValidator(s)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}

int main() {
    std::string s;
    std::cout << "Enter an email: ";
    std::cin >> s;
    printEmailValidator(s);
    return 0;
}