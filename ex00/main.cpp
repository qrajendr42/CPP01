#include "Zombie.hpp"

int main()
{
    std::cout << "___ Random Chump (stack) ___" << std::endl;
    randomChump("stack");

    std::cout << "\n___ New Zombie (heap) ___" << std::endl;
    Zombie* heapZombie = newZombie("heap");
    heapZombie->announce();

    delete heapZombie;

    return (0);
}
