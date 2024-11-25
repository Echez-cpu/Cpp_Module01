/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:09:43 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 16:31:29 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Harl
{
private:
    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;

public:
    void complain(str level);
};

#endif

