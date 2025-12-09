/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:07:51 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:07:53 by mapham           ###   ########.fr       */
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