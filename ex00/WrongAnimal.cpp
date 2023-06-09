/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:27:02 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 16:35:59 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("unknown")
{
	std::cout << "Default constructor for WrongAnimal class called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Constructor for WrongAnimal class called with the type " << this->_type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "Copy constructor for WrongAnimal class called" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor for WrongAnimal class called" << std::endl;
	return ; 
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Copy assigment for WrongAnimal class called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I am an WrongAnimal of type " << this->_type << ", but I don't do any sound" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
