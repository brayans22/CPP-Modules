#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(int argc, char **argv)
{
    // Creating object array with 10 elements with the same name "Zombies"
    Zombie	*laOrda = zombieHorde(10, "Zombies");

    // Deleting memory object array
	delete [] laOrda;

    return (0);
}