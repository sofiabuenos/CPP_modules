#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string getType() const;
	void setType(std::string type);
};




#endif
