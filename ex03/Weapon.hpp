#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string weaponType);
	const std::string& getType() const;
	void setType(std::string newType);
};

#endif // WEAPON_HPP