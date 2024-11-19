/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:55 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/19 15:04:39 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Zombie 
{
private:
    str name;

public:
    Zombie();
    Zombie(str name);
    ~Zombie();

    void announce() const;
    void setName(const str &name);
};

Zombie *zombieHorde(int N, str name);

#endif