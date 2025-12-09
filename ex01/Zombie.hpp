/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:07:29 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:07:32 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();

	void announce(void) const;
	void newName(const std::string name);

};

Zombie* zombieHorde(int N, std::string name);

#endif