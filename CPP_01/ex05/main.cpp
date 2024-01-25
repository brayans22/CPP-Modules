#include "Harl.hpp"
#include <chrono>
#include <thread>
#include <iostream>
#include <iostream>

static int isValidLevel(std::string input)
{
    return (input == "DEBUG" || input == "WARNING" || input == "INFO" || input == "ERROR");
}

int main() {
    std::string input;
    Harl harl;

    while (1)
    {
        system ("clear");
        std::cout << "LEVELS {ERROR, INFO, WARNING, DEBUG}" << std::endl;
        std::cout << "Enter a level (type 'exit' to exit): ";
        std::getline(std::cin, input);
        if (input == "exit")
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        else if (input.empty() || !isValidLevel(input))
        {
            std::cout << "Please enter a valid level" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
        else
        {
            system ("clear");
            harl.complain(input);
            std::this_thread::sleep_for(std::chrono::seconds(5));
        }
            
    }
    return 0;
}