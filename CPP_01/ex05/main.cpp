#include "Harl.hpp"
#include <iostream>
#include <iostream>

int main() {
    std::string input;
    Harl harl;

    while (1) 
    {
        std::cout << "Enter a level (type 'exit' to exit): ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Please enter a level." << std::endl;
        else if (input == "exit")
            std::cout << "Exiting the program." << std::endl;
            break;
        else
            harl.complain(input);
    }
    return 0;
}