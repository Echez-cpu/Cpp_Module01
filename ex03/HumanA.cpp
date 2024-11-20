/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:21:15 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/20 17:06:48 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(const str &name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const
{
	std::cout << "\033[1;32m" << name << " attacks with their " << weapon.getType() << "\033[0m" << std::endl;
}
