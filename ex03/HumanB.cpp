/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:47:00 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/20 17:09:03 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(const str &name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapon) 
{
    this->weapon = &weapon;
}

void HumanB::attack() const 
{
    if (weapon) 
	{
        std::cout << "\033[1;33m" << name << " attacks with their " << weapon->getType() << "\033[0m" << std::endl;
    } 
	
	else 
	{
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}