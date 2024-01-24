#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) 
{
    Harl        harl;
    std::string level = argv[1];

    if (argc != 2) 
    {
        return (std::cout << "Correct usage: ./harlFilter level\n", -1);
    }
    harl.activateFilter(leve);

    return EXIT_SUCCESS;
}