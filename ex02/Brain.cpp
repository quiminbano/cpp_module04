/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:34:03 by corellan          #+#    #+#             */
/*   Updated: 2023/06/15 15:11:14 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	int	i;

	i = 0;
	std::cout << "Default constructor for Brain class called" << std::endl;
	while (i < 100)
	{
		this->_ideas[i] = "No thoughts in my Brain";
		i++;
	}
}

Brain::Brain(std::string thoughts)
{
	int	i;

	i = 0;
	std::cout << "Constructor for Brain class called with a thought defined" << std::endl;
	while (i < 100)
	{
		this->_ideas[i] = thoughts;
		i++;
	}
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Copy constructor for Brain class called" << std::endl;
	*this = rhs;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Default destructor for Brain class called" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	int	i;

	i = 0;
	std::cout << "Copy assigment operator for Brain class called" << std::endl;
	while (i < 100)
	{
		this->_ideas[i] = rhs.getIdeas(i);
		i++;
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}

void	Brain::printIdeas(void)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		if (i == 0)
			std::cout << "I think " << this->_ideas[i] << " " << (i + 1) << " time" << std::endl;
		else
			std::cout << "I think " << this->_ideas[i] << " " << (i + 1) << " times" << std::endl;
		i++;
	}
	return ;
}
