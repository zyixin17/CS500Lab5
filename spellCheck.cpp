#include "spellCheck.h"
#include <regex>
#include <iostream>

std::string spellCheck(std::string rec_s, std::string s) {
    // Regex
    std::regex pattern("((B|b)art[a-zA-Z]+ )");

    //std::cout << "Regex: " << std::regex_replace(s, pattern, rec_s + " ") << std::endl;
    return std::regex_replace(s, pattern, rec_s + " ");
}

// Barthalamuel
// Barthalamule is a fantastic Student. barthle once raised a clutch of baby hawksto adulthood. There was never a challenge that bartksafdjksdfNASmwik couldn'tsolv
void check(){
    std::string rec_s, s;
    std::cout << "Enter a recommendation: ";
    std::getline(std::cin, s);
    std::cout << "Enter a name: ";
    std::getline(std::cin, rec_s);
    std::cout << "The result is: " << std::endl;
    std::cout << spellCheck(rec_s, s) << std::endl;
}

int main(){
    check();
    return 0;
}