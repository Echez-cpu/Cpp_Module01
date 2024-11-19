/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:06:49 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/19 15:04:32 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::Zombie(str name) : name(name) {}

Zombie::~Zombie()
{
    std::cout << "\033[31m" << "Zombie " << name << " was annihilated." << "\033[0m" << std::endl;
}

void Zombie::announce() const
{
    std::cout << "\033[32m" << name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

void Zombie::setName(const str& name)
{
    this->name = name;
}
