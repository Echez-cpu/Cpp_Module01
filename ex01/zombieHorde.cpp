/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:14:41 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/19 14:52:29 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie *zombieHorde(int N, str name)
{
	int i;

	if (N <= 0)
	{
		return NULL;
	}

	Zombie *horde = new Zombie[N];

	i = 0;

	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}

	return horde;
}





