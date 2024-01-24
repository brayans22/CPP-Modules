#include "Zombie.hpp"

# include <string>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
		zombies[i].announce();
	}
	delete [] zombies;
}