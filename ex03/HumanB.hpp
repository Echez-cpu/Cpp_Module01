/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:05 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/20 16:41:46 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string str;
class HumanB 
{
private:
    str name;
    Weapon *weapon;

public:
    HumanB(const str &name);
    void setWeapon(Weapon &weapon);
    void attack() const;
};

#endif