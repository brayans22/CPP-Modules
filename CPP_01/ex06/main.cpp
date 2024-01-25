#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) 
{
    Harl        harl;

    if (argc != 2) 
        return (std::cout << "Correct usage: ./harlFilter level\n", -1);
    harl.activateFilter(argv[1]);

    return 0;
}
