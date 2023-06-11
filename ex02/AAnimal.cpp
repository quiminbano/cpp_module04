/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:05:06 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 13:05:30 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("unknown")
{
	std::cout << "Default constructor for AAnimal class called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Constructor for AAnimal class called with the type " << this->_type << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "Copy constructor for AAnimal class called" << std::endl;
	*this = rhs;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor for AAnimal class called" << std::endl;
	return ; 
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "Copy assigment for AAnimal class called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
