/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:49:34 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 16:39:43 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &rhs);
		~Character(void);

		Character	&operator=(Character const &rhs);

		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
	
	private:

		std::string	_name;
		AMateria	*_inventory[4];
		AMateria	*_reserve[20];
		int			_flag;
		int			_counter;
		int			_reserveCounter;
};

#endif