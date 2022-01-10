#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attacks with his " << (*_weapon).get_type() << std::endl;
    else
        std::cout << _name << " attacks with his fists" << std::endl; 
}