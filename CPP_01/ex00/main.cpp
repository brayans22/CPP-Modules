#include "Zombie.hpp"

Zombie *newZombie(std::string name);

int main(void)
{
    // Creating 2 Zombies instances
    Zombie *z1;
    Zombie *z2;

    // add name z1 & z2
    z1 = newZombie("RANDOMMM");
    z2 = newZombie("Mather");

    // announce zombies
    z1->announce();
    z2->announce();

    // Using destructor
    delete z1;
    delete z2;

    return (0);
}