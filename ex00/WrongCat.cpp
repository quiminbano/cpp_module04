/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:26:44 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 16:32:26 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default constructor for WrongCat class called" << std::endl;
	return ;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "Constructor for WrongCat class called with the type " << this->_type << std::endl;
	this->_type = type;
	return ;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	std::cout << "Copy constructor for WrongCat class called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor for WrongCat class called" << std::endl;
	return ; 
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Copy assigment for WrongCat class called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Meowwwww" << std::endl;
	return ;
}