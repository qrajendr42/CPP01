#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        Zombie(std::string name);
        std::string getName(void) const;
        void    setName(std::string newName);
        void    announce() const;
        ~Zombie();
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
