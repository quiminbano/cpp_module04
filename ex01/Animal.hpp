/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:07:52 by corellan          #+#    #+#             */
/*   Updated: 2023/06/16 11:19:40 by corellan         ###   ########.fr       */
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

	virtual void					makeSound(void) const;
	virtual void					printAddressBrain(void) const;
	virtual void					printBrain(void) const;
	virtual const std::type_info	&getTypeOfClass(void) const;

	std::string	getType(void) const;

protected:

	std::string	_type;

};

#endif