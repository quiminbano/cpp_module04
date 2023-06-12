/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:01:01 by corellan          #+#    #+#             */
/*   Updated: 2023/06/12 15:21:33 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Constructor for AMateria called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &rhs)
{
	std::cout << "Copy constructor for AMateria class called" << std::endl;
	*this = rhs;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "Constructor for AMateria class called, passing " << type << " as parameter" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor for AMateria class called" << std::endl;
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	std::cout << "Copy assigment operator for AMateria class called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
