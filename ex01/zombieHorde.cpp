#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombies = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
		zombies[i++].set_name(name);
	return (zombies);
}

void	announce_zombies(Zombie *zombies, int N)
{
	int i = 0;
	while (i < N)
		zombies[i++].announce();
}