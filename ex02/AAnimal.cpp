/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:05:06 by corellan          #+#    #+#             */
/*   Updated: 2023/06/16 15:09:48 by corellan         ###   ########.fr       */
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

AAnimal::AAnimal(AAnimal const &rhs) : _type("unknown")
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
	std::string	temp = rhs.getTypeOfClass().name();
	std::string temp2 = this->getTypeOfClass().name();
	AAnimal		*ptr;

	ptr = const_cast<AAnimal*>(&rhs);
	std::cout << "Copy assigment for AAnimal class called" << std::endl;
	if (this != &rhs)
	{
		if (ptr == NULL)
		{
			std::cout << "You are using the copy assigment operator passing a reference of a NULL pointer. Aborting mission" << std::endl; 
			return (*this);
		}
		if (temp.compare(temp2) != 0)
		{
			std::cout << "You are trying to use the copy assigment operator in two different animals. Aborting mission" << std::endl;
			return (*this);
		}
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

const std::type_info	&AAnimal::getTypeOfClass(void) const
{
	return (typeid(*this));
}
