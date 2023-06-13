/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:56:07 by corellan          #+#    #+#             */
/*   Updated: 2023/06/13 19:52:17 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	std::cout << "Default constructor for MateriaSource class called" << std::endl;
	for (i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	int	i;

	std::cout << "Copy constructor for MateriaSource class called" << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (rhs.getMateria(i) != NULL)
			this->_materias[i] = rhs.getMateria(i)->clone();
		else
			this->_materias[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	std::cout << "Default destructor for the MateriaSource class called" << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	return ;
}

void	MateriaSource::learnMateria(AMateria *ptr)
{
	int	i;

	i = 0;
	while (this->_materias[i] != NULL)
	{
		i++;
		if (i >= 4)
		{
			std::cout << "The materias inventory is full." << std::endl;
			delete ptr;
			return ;
		}
	}
	this->_materias[i] = ptr;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*ptr;
	int			i;

	i = 0;
	ptr = NULL;
	while (this->_materias[i] != NULL)
	{
		if (this->_materias[i]->getType().compare(type) == 0)
		{
			ptr = this->_materias[i]->clone();
			break ;
		}
		if (i > 3)
			break ;
		i++;
	}
	return (ptr);
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int	i;

	std::cout << "Copy assigment operator for MateriaSource class called" << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (rhs.getMateria(i) != NULL)
			this->_materias[i] = rhs.getMateria(i)->clone();
		else
			this->_materias[i] = NULL;
	}
}

AMateria	*MateriaSource::getMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return (NULL);
	return (this->_materias[idx]);
}