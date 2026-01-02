#include "Zombie.hpp"

int main()
{
    Zombie  *horde;
    int     num;

    num = 5;
    horde = zombieHorde(num, "Baby");

    for (int i = 0; i < num; i++)
        horde[i].announce();

    delete[] horde;

    return (0);
}
