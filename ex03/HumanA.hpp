/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 21:06:22 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:44:06 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

//HumanA utilise une reference car il ne peut pas être cree sans arme,
//et une reference doit être initialisee immédiatement et ne peut pas devenir NULL.

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon; //HumanA oblige d avoir une arme

public:
	//tjrs arme donc doit recevoir une ref dans le constructeur
	HumanA(std::string name, Weapon &weapon); 
	~HumanA();

	//se contente daffiche _name et _weapon donc doit etre const
	void	attack() const; 
};

#endif