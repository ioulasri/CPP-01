#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A zombie is created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed!" << std::endl;
}

void	Zombie::set_name(std::string data)
{
	name = data;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
