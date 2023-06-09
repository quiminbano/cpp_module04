/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:27:18 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 15:05:54 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor for the Brain class called" << std::endl;
	return ;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Copy constructor for the Brain class called" << std::endl;
	*this = rhs;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Destructor for the brain class called" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	
}
