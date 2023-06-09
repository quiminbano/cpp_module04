/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:58:06 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 10:59:18 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("unknown")
{
	std::cout << "Default constructor for Animal class called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Constructor for Animal class called with the type " << this->_type << std::endl;
	return ;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Copy constructor for Animal class called" << std::endl;
	*this = rhs;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Destructor for Animal class called" << std::endl;
	return ; 
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy assigment for Animal class called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "I am an animal of type " << this->_type << ", but I don't do any sound" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
