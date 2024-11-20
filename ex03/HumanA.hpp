/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:32:54 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/20 15:20:37 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string str;
class HumanA 
{
private:
    str name;
    Weapon &weapon;

public:
    HumanA(const str &name, Weapon &weapon);
    void attack() const;
};

#endif

