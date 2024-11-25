/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:55:14 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 18:35:19 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

typedef std::string str;

class Weapon
{
private:
    str type;

public:
    Weapon(const str &type);
    const str &getType() const;
    void setType(const str &newType);
};

#endif