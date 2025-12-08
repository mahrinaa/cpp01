/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 00:19:08 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:40:47 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie 
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();
	
	void announce(void) const;
};

//Heap, zombie doit etre delete
Zombie* newZombie(std::string name); 

//Stack, zombie detruit automatiquement
void	randomChump(std::string name); 

#endif