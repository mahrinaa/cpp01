/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:06:43 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:06:46 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

//HumanA utilise une reference car il ne peut pas être cree sans arme,
//une reference doit être initialisee immediatement et ne peut pas devenir NULL.

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon; //HumanA oblige d avoir une arme

public:
	//tjrs arme donc doit recevoir une ref dans le constructeur
	HumanA(std::string name, Weapon &weapon); 
	~HumanA();

	//se contente d'afficher _name et _weapon donc doit etre const
	void	attack() const; 
};

#endif