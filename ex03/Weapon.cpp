/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:08:24 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 18:36:27 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(const str &type) : type(type) {}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const str &newType)
{
    type = newType;
}
