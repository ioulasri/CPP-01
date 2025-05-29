#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon& weapon;
public:
	HumanA(std::string name, Weapon& w) : name(name), weapon(w) {}
	void attack();
};

#endif // HUMANA_HPP