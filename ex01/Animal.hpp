/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:07:52 by corellan          #+#    #+#             */
/*   Updated: 2023/06/10 17:37:48 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
public:

	Animal(void);
	Animal(Animal const &rhs);
	Animal(std::string type);
	virtual ~Animal(void);

	Animal	&operator=(Animal const &rhs);

	virtual void	makeSound(void) const;
	virtual void	printAddressBrain(void) const = 0;

	std::string	getType(void) const;

protected:

	std::string	_type;

};

#endif