#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }

    Harl harl;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string level = argv[1];
    int index = -1;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            index = i;
            break;
        }
    }

    switch (index)
    {
        case 0:
            harl.debug();
            harl.info();
            harl.warning();
            harl.error();
            break;
        case 1:
            harl.info();
            harl.warning();
            harl.error();
            break;
        case 2:
            harl.warning();
            harl.error();
            break;
        case 3:
            harl.error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}