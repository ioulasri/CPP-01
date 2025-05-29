#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(5, "imad");

	announce_zombies(zombies, 5);
	delete[] zombies;
	return (0);
}