#include "Harl.hpp"

/* Constructor */
Harl::Harl(){}

void    Harl::warning(void) 
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error(void) 
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::order(void) 
{
    std::cout << "[ ORDER ]" << std::endl;
    std::cout << "I want to order hamburguer with bacon please!" << std::endl;
    std::cout << std::endl;
}

void    Harl::greet(void) 
{
    std::cout << "[ GREET ]" << std::endl;
    std::cout << "GOOD MOORNING! I'm Harl." << std::endl;
    std::cout << std::endl;
}

void    Harl::activateFilter(std::string level) 
{
    std::string levels[] = {"WARNING", "ERROR", "ORDER", "GREET"};
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    switch (i)
    {
    case    0: 
        this->warning();
    case    1: 
        this->error();
    case    2: 
        this->order();
    case    3: 
        this->greet();
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

/* Destructor */
Harl::~Harl(){}
