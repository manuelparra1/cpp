#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[]) {
    std::string input;
    if (argc < 2) {
        std::cout << "Please enter the string: ";
        std::getline(std::cin, input);
    } else {
        input = argv[1];
    }

    std::string formatted_input;
    for (char c : input) {
        if (std::isalnum(c)) {
            formatted_input += std::tolower(c);
        } else {
            formatted_input += '_';
        }
    }
    // Remove trailing underscore, if any
    if (!formatted_input.empty() && formatted_input.back() == '_') {
        formatted_input.pop_back();
    }
    std::cout << formatted_input << std::endl;
    return 0;
}


