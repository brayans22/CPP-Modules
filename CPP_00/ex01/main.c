#include "PhoneBook.hpp"
#include <cstdlib>
#include <iostream>
#include <iomanip>

#define ADD    "ADD"
#define EXIT   "EXIT"
#define SEARCH "SEARCH"


static inline bool isInputValid(const std::string & input) {
    return input == ADD || input == SEARCH || input == EXIT;
}

static void printOptions(void)
{
    std::cout << "           ADD - Add a new contact          \n"
            "           SEARCH - Display a contact       \n"
            "           EXIT - Exit PhoneBook            \n"
        << std::endl;
}

static std::string getOption(void)
{
    std::string input;

    while (1)
    {
        std::cout << "phone number : ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cin.clear();  // Clear the eof flag
            while (std::cin.get() != '\n')
            {
            }
            //std::cin.ignore(std::numeric_limits<std::streamsize>std::max(), '\n');
        }
        /*
        if (!input.empty() && isInputValid(input))
            break;
        */
        std::cin.clear();
        std::cout << "Please insert a valid input" << std::endl;
    }
    return input;
}

int main(void)
{
    PhoneBook phoneBook;
    std::string option;

    printOptions();
    while (1)
    {
        option = getOption();
        if (option == ADD)
            phoneBook.addContact();
        else if (option == SEARCH)
            phoneBook.searchContact();
        else if (option == EXIT)
        {
            std::cout << "Bye!" << std::endl;
            return 0;
        }
        else
            std::cout << "Invalid input, try again" << std::endl;
    }
    return 0;
}