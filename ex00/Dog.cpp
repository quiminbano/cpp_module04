/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:12:26 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 18:21:16 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor for Dog class called" << std::endl;
	return ;
}

Dog::Dog(std::string type)
{
	std::cout << "Constructor for Dog class called with the type " << this->_type << std::endl;
	this->_type = type;
	return ;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Copy constructor for Dog class called" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Destructor for Dog class called" << std::endl;
	return ; 
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Copy assigment for Dog class called" << std::endl;
	*this = rhs;
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "I am an dog and I say Woof Woof" << std::endl;
	return ;
}