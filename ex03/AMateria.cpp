/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:01:01 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 17:24:29 by corellan         ###   ########.fr       */
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

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	
}
