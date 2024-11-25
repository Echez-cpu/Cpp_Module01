/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:45:05 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 21:16:45 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug(void) const
{
    std::cout << "\033[35m[ DEBUG ]\033[0m" << '\n' << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(void) const
{
    std::cout << "\033[35m[ INFO ]\033[0m" << '\n' << "I cannot believe adding extra bacon costs more money." << '\n' 
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "\033[35m[ WARNING ]\033[0m" << '\n' << "I think I deserve to have some extra bacon for free." << '\n'
	 << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(void) const
{
    std::cout << "\033[35m[ ERROR ]\033[0m" << std::endl << "This is unacceptable! I want to speak to the manager now."
	 << std::endl << std::endl;
}




void Harl::complain(str level)
{
    str array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
	int 	index;
	
	index = 0;

	str level2 = "I am not sure how tired I am today...";
	
	if (level == level2)
	{
		 index = 5;
	}
	
    while (index < 4)
	{
        if (array[index] == level)
		{
			 break;
		}
			index++;
    }

    switch (index)
	{
        case 0:
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case 1:
            this->info();
            this->warning();
            this->error();
            break;
        case 2:
            this->warning();
            this->error();
            break;
        case 3:
            this->error();
            break;
		case 4:
		    std::cout << "\033[31mfail:\033[0m type DEBUG, INFO, WARNING or ERROR" << std::endl;
			break;
		case 5:
		    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		    break;
    }
}
