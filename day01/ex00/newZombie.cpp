#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    if (name.length() <= 0)
    {
        std::cout << "Name is invalid." << std::endl;
        return NULL;
    }
    Zombie *newZombie = new Zombie(name);
    return newZombie;
}