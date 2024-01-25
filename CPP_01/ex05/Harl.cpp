#include "Harl.hpp"

/* NEW CONCEPT POINTERS TO MEMBER FUNCTIONS */

/* Constructor */
Harl::Harl(){}

void    Harl::debug(void) 
{
    std::cout << "love having extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::warning(void) 
{
    std::cout << "I think I deserve to have some extra bacon for free.\n" <<
    "I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void) 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::info(void) 
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n"
    << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::complain(std::string level) 
{
    // Almacenamos los 4 metodos de Harl
    t_harl_function harl_functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    // Creamos un vector que contenga la palabra asociada a cada funcion.
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    	int i = 0;
	for (; i < 4; i++)
	{
		if (level == levels[i])
			(this->*harl_functions[i])();
	}
}

/* Destructor */
Harl::~Harl(){}
