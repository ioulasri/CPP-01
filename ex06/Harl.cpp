#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n"
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n"
              << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n"
              << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n"
              << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*HarlFunc)(void);
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = 0;
	for (; i < 4; i++)
	{
        if (levels[i] == level)
            break;
	}
	switch(i)
	{
		case(0):
			(this->*funcs[0])();
        case(1):
            (this->*funcs[1])();
        case(2):
            (this->*funcs[2])();
        case(3):
            (this->*funcs[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;  
	}
}