#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie * arthur = newZombie("Arthur");
    arthur->announce();
    randomChump("Martin");
    delete arthur;
    return 0;
}
