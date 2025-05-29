#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& w) {
	weapon = &w;
}

void HumanB::attack() {
	if (weapon) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << name << " has no weapon to attack with!" << std::endl;
	}
}