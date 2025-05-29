#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string weaponType) : type(weaponType) {}
	const std::string& getType() const { return type; }
	void setType(std::string newType) { type = newType; }
};

#endif // WEAPON_HPP