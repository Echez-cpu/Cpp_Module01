/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:12:33 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 16:50:53 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug(void) const
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}



void	Harl::complain(str level) 
{
	void	(Harl::*funcPtr)(void) const = NULL;
	void	(Harl::*arrayPtr[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	str		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	
	int		i;
	
	i = 0;

	while (i < 4) 
	{
		if (levels[i] == level)
		{
			funcPtr = arrayPtr[i];
		}
			i++;
	}
	if (!funcPtr) 
	{
		std::cout << "\033[31mInvalid complain!\033[0m use: DEBUG, WARNING, INFO or ERORR" << std::endl;
		return;
	}
	(this->*funcPtr)();
}