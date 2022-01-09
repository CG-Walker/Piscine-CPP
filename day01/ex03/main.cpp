#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon sword = Weapon("Old Sword");
    HumanA bob("Bob", sword);
    bob.attack();
    return 0;
}
