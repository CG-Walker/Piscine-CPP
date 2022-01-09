#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>

class HumanB
{
    public:
        HumanB();
        ~HumanB();
        void attack();
    private:
        std::string _weapon;
        std::string _name;
};

#endif