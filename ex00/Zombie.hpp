#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	set_name(std::string data);
	void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* ZOMBIE_HPP */